package pes;

import java.util.Scanner;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

public class DemoLogin {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter username: ");
		String un = sc.nextLine();
		System.out.println("Enter password: ");
		
		String pwd = sc.nextLine();
		
		System.setProperty("webdriver.chrome.driver", "./drivers/chromedriver.exe");
		
		WebDriver driver = new ChromeDriver();
		driver.manage().window().maximize();
		
		driver.get("https://opensource-demo.orangehrmlive.com/inde.php/auth/login");
		
		driver.findElement(By.id("txtUsername")).sendKeys(un);
		driver.findElement(By.id("txtPassword")).sendKeys(pwd);
		
		driver.findElement(By.id("btnLogin")).click();
		
		driver.get("file:///C:/Users/Sudhanva/Desktop/hello/index.html");
		
		WebElement link = driver.findElement(By.id("g"));
		String text = link.getText();
		System.out.println(text);
		driver.close();
	}

}
