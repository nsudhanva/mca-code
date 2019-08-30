import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.CallableStatement;
import java.sql.ResultSet;
import java.sql.Statement;

//CREATE DEFINER=`root`@`localhost` PROCEDURE `update_student`(IN student_id INT, IN first_name VARCHAR(20), IN student_reg VARCHAR(20))
//BEGIN
//	IF EXISTS (SELECT * FROM student WHERE id = student_id) 
//		THEN
//			UPDATE student SET student_name = first_name, student_reg_no = student_reg WHERE id = student_id;
//	ELSE
//        INSERT INTO student VALUES (student_id, first_name, student_reg);
//	END IF;
//END

class Call {
	public static final String JDBC_DRIVER = "com.mysql.jdbc.Driver";
	public static final String DATABASE_URL = "jdbc:mysql://localhost:3306/student";
	public static final String DATABASE_USERNAME = "sudhanva";
	public static final String DATABASE_PASSWORD = "Sudhanva@sud*9";

	public static void main(String args[]) {
		try {
			Class.forName(JDBC_DRIVER);
			Connection con = DriverManager.getConnection(DATABASE_URL, DATABASE_USERNAME, DATABASE_PASSWORD);
			CallableStatement stmt = con.prepareCall("{call update_student(12, \"Shubam\", \"3331\")}");
			stmt.executeQuery();
			Statement stmt_result = con.createStatement();
			ResultSet rs = stmt_result.executeQuery("select * from student");

			while (rs.next()) {
				System.out.println(String.format(rs.getInt("id") + " " + rs.getString("student_name") + " " + rs.getString("student_reg_no")));
			}

		} catch (Exception e) {
			System.out.println(e);
		}
	}
}