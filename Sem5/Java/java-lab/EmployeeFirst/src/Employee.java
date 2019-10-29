import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.Connection;

public class Employee {
	public static void main(String args[]){  
		try{  
			Class.forName("com.mysql.jdbc.Driver");  
			Connection con = DriverManager.getConnection(  
					"jdbc:mysql://localhost:3306/sonoo","root","root");  
			//here sonoo is database name, root is username and password  
			Statement stmt = con.createStatement();  

			String sql = "CREATE TABLE EMPLOYEE " +
					"(id INTEGER not NULL, " +
					" first VARCHAR(255), " + 
					" last VARCHAR(255), " + 
					" age INTEGER, " + 
					" PRIMARY KEY ( id ))"; 

			stmt.executeUpdate(sql);
			System.out.println("Created table in given database...");

			String sql1 = "INSERT INTO EMPLOYEE " +
					"VALUES (100, 'Zara', 'Ali', 18)";
			stmt.executeUpdate(sql1);
			sql1 = "INSERT INTO EMPLOYEE " +
					"VALUES (101, 'Mahnaz', 'Fatma', 25)";
			stmt.executeUpdate(sql1);
			sql1 = "INSERT INTO EMPLOYEE " +
					"VALUES (102, 'Zaid', 'Khan', 30)";
			stmt.executeUpdate(sql1);
			sql1 = "INSERT INTO EMPLOYEE " +
					"VALUES(103, 'Sumit', 'Mittal', 28)";
			stmt.executeUpdate(sql1);

		}catch(SQLException se){
			//Handle errors for JDBC
			se.printStackTrace();
		}catch(Exception e){
			//Handle errors for Class.forName
			e.printStackTrace();
		}
	}  	
}
