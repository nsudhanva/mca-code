package mca;

import java.sql.*;

public class Connection {

    public static void main(String args[]) {
        Connection con = null;
        Statement st = null;
       // ResultSet rs = null;

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            con = DriverManager.getConnection(
                    "jdbc:mysql://localhost/student", "root", "");
            DatabaseMetaData dbmd=con.getMetaData();  
            String table[]={"TABLE"};  
            ResultSet rs1=dbmd.getTables(null,null,null,table);  
              
            while(rs1.next()){  
            System.out.println(rs1.getString(3));  
            }  

            st = con.createStatement();
             String sql = "select * from sample";
            rs1 = st.executeQuery(sql);
            ResultSetMetaData metaData = rs1.getMetaData();

            int rowCount = metaData.getColumnCount();

            System.out.println("Table Name : " + metaData.getTableName(2));
            System.out.println("Field  \tDataType");

            for (int i = 0; i < rowCount; i++) {
            System.out.print(metaData.getColumnName(i + 1) + "  \t");
               System.out.println(metaData.getColumnTypeName(i + 1));
          }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}