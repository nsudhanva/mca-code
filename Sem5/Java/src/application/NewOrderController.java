package application;

import java.io.IOException;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.ResourceBundle;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.control.cell.PropertyValueFactory;


/**
 * 
 * This class controls the new order page.
 * @author femi
 *
 */
public class NewOrderController implements Initializable {
	
	@FXML private Label total;
	@FXML private ComboBox<String> cbItems, cbTables;
	@FXML private TextField txtQuantity;
	@FXML private Button btnOrder;
	@FXML private TableView<ItemObject> orderTable;
	@FXML private TableColumn<ItemObject, String> quantityColumn;
	@FXML private TableColumn<ItemObject, String> itemColumn;
	@FXML private TableColumn<ItemObject, Integer> priceColumn;
	@FXML private TextArea txtComments;
	
	public ObservableList<ItemObject> itemList = FXCollections.observableArrayList();
	public HashMap<String, Integer> orderList2 = new HashMap<String, Integer>();
	public int table;
	public int subTotal = 0;

	// List to store all of the items the user would like to order
	public ArrayList<ItemObject> exprimentOrderList = new ArrayList<ItemObject>();

	// Contains a list of items that are available for the user to select from 
	ObservableList<String> dropdownList = FXCollections.observableArrayList(Items.items.keySet());
	

	/* (non-Javadoc)
	 * @see javafx.fxml.Initializable#initialize(java.net.URL, java.util.ResourceBundle)
	 */
	@Override
	public void initialize(URL location, ResourceBundle resources) {
		
		txtQuantity.setText("1");
		txtQuantity.setDisable(true);
		
		
		// create a TableView of the items that are currently in a persons order 
		//orderTable.setItems(itemList);
		
		// assign the variables to the columns in the TableView
		quantityColumn.setCellValueFactory(new PropertyValueFactory<ItemObject, String>("quantity"));
		priceColumn.setCellValueFactory(new PropertyValueFactory<ItemObject, Integer>("price"));
		itemColumn.setCellValueFactory(new PropertyValueFactory<ItemObject, String>("name"));
		
		// add all items (foods) to the combo list
		cbItems.setItems(dropdownList);
		
		// Show all of the tables that are currently available
		cbTables.setItems(hasOrders(Platform.getAllTables()));
		
		// select first item by default
		cbItems.getSelectionModel().selectFirst();
			
	}
	
	/**
	 * 
	 * Takes the user to the homepage.
	 * 
	 * @param event
	 * @throws IOException if the FXML page cannot be loaded 
	 */
	public void Home(ActionEvent event) throws IOException {
		
		// go to homepage
		Platform.getScene().home();
	}
	

	/**
	 * 
	 * Creates a new order which contains the items that user added to
	 * item list. The new order is added to the platform and then the
	 * table is made unavailable to any other orders.
	 * 
	 * @param event
	 * @throws IOException if the FXML page cannot be loaded 
	 */
	public void makeOrder(ActionEvent event) throws IOException {
		
		// get the selected table number
		String tableNumber = cbTables.getSelectionModel().getSelectedItem(); 
		table = Integer.parseInt(tableNumber);
		
		// create a new order
		Orders order = new Orders(table); 
		
		// add all items to the order 
		order.addMultipleOrderItems(orderList2); // add all items to order // hashmap version // removed this, duplicated items
		order.addMultipleItemBuffer(exprimentOrderList);
		
		// add text from text area to the order
		order.addComments(txtComments.getText());
		
		// display order receipt in console 
		order.displayOrder(); 
		
		//--------------------------------------------------------
		
		// remove all items from the current order list 
		exprimentOrderList.removeAll(exprimentOrderList);
		
		// add the order to platform
		Platform.putOrder(order, order.getOrderID()); 
		
		// update table with order number in platform
		Platform.getTable(table).orderID = order.getOrderID(); 
		
		// set the current table to 0
		table = 0;
		
		// go to homepage
		Platform.getScene().home();
		
		try {
		// send a message of the order to the user if they have added a number
		if (Messages.getNumber() !=  null) {
			Messages.sendOrder(Messages.getNumber(), order.orderDetails());
			System.out.println("ORDER SMS SENT.");
		}
		} catch (Exception e) {
			//e.printStackTrace();
			System.out.println("ORDER SMS MESSAGE NOT SENT.");
			System.out.println("Probably something to do with setup of the Twilio API");
			System.out.println("Please check that you have provided the correct credentials in Main.java.");
		}
		
	}
	
	/**
	 * 
	 * Toggles the visibility of the order button.
	 * 
	 * @param event
	 */
	public void changeCombo(ActionEvent event) {
		btnOrder.setDisable(false);
	}
	
	/**
	 * 
	 * Adds an item selected from a combox box to a list to be added to an order.
	 * The items are also added to a TableView.
	 * 
	 * @param event
	 */
	public void addItem(ActionEvent event) {
		
		// get the selected item from the drop down menu 
		String text = cbItems.getSelectionModel().getSelectedItem();
		int quantity2 = Integer.parseInt(txtQuantity.getText()); //hashmap version
				
		
		if (orderList2.containsKey(text)) {
			orderList2.put(text, orderList2.get(text) + quantity2);
		}
		
		else {
			orderList2.put(text, quantity2);
		}
		
		// Allow user to see what has been added to their order
		ItemObject item = new ItemObject(text, Items.getItemPrice(text), quantity2+"");

		// add the item to the order
		exprimentOrderList.add(item);

		// add the the price of the item to the current total
		subTotal += Items.getItemPrice(text) * (quantity2);
		
		// update the total label
		total.setText("" + subTotal + ".00");
	
		// add the selected item to the TableView
		orderTable.getItems().add(item);
		
		// if the order is empty do not allow the user to add a table 
		if (!orderTable.getItems().isEmpty()) {
			cbTables.setDisable(false);
		}	
	}
	
	/**
	 * 
	 * Returns a ObserveableList of all of the Tables that have orders on the platform.
	 * 
	 * @param map
	 * @return a list of all of the Tables that have orders 
	 */
	public static ObservableList<String> hasOrders(HashMap<Integer, Tables> map) {
		
		// a list that contains all of the tables that have orders
		ObservableList<String> tablesOlist = FXCollections.observableArrayList();
		for (Map.Entry<Integer, Tables> table : map.entrySet()) {
			if (table.getValue().orderID == 0) {
				tablesOlist.add(table.getKey().toString());
			}
		}
		return tablesOlist;
	}
}