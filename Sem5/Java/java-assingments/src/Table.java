import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.DatabaseMetaData;
import java.sql.ResultSet;

class Table {
	public static final String JDBC_DRIVER = "com.mysql.jdbc.Driver";
	public static final String DATABASE_URL = "jdbc:mysql://localhost:3306/student";
	public static final String DATABASE_USERNAME = "sudhanva";
	public static final String DATABASE_PASSWORD = "Sudhanva@sud*9";

	public static void main(String args[]) {
		try {
			Class.forName(JDBC_DRIVER);
			Connection con = DriverManager.getConnection(DATABASE_URL, DATABASE_USERNAME, DATABASE_PASSWORD);
			DatabaseMetaData md = con.getMetaData();
			ResultSet rs = md.getTables(null, null, "%", null);
			while (rs.next()) {
			  System.out.println(rs.getString(3));
			}
		} catch (Exception e) {
			System.out.println(e);
		}
	}
}