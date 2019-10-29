import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.CallableStatement;

public class Employee {

	public static void getSkills(int candidateId) {
		// 
		String query = "{ call get_candidate_skill(?) }";
		ResultSet rs;

		try (Connection conn = DriverManager.getConnection(  
				"jdbc:mysql://localhost:3306/sonoo","root","root");  
				CallableStatement stmt = conn.prepareCall(query)) {

			stmt.setInt(1, candidateId);

			rs = stmt.executeQuery();
			while (rs.next()) {
				System.out.println(String.format("%s - %s",
						rs.getString("first_name") + " "
								+ rs.getString("last_name"),
								rs.getString("skill")));
			}
		} catch (SQLException ex) {
			System.out.println(ex.getMessage());
		}
	}

	public static void main(String[] args) {
		getSkills(122);
	}
}

/*

DELIMITER $$
CREATE PROCEDURE get_candidate_skill(IN candidate_id INT)
BEGIN
    SELECT candidates.id, first_name,last_name, skills.name AS skill 
    FROM candidates
    INNER JOIN candidate_skills ON candidates.id = candidate_skills.candidate_id
    INNER JOIN skills ON skills.id = candidate_skills.skill_id
    WHERE candidates.id = candidate_id;
    END$$
DELIMITER ;

CREATE OR REPLACE PROCEDURE get_employee_by_id(
	   p_id IN EMPLOYEE.ID%TYPE,
       o_name OUT EMPLOYEE.NAME%TYPE,
	   o_salary OUT EMPLOYEE.SALARY%TYPE,
	   o_date OUT EMPLOYEE.CREATED_DATE%TYPE)
    AS
    BEGIN

    SELECT NAME , SALARY, CREATED_DATE INTO o_name, o_salary, o_date from EMPLOYEE WHERE ID = p_id;

    END;

 */