package pes;

import java.util.Scanner;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class DemoBoth {

	public static void main(String[] args) {
	
		System.out.println("Enter the browser: ");
		Scanner sc = new Scanner(System.in);
		String browser = sc.nextLine();
		WebDriver driver = null;
		
		if(browser.equals("ff")) {
			
			String keyFirefox = "webdriver.gecko.driver";
			String valueFirefox = "./drivers/geckodriver.exe";
			System.setProperty(keyFirefox, valueFirefox);
			
			driver = new FirefoxDriver();
		}
		else {
			String keyChrome = "webdriver.chrome.driver";
			String valueChrome = "./drivers/chromedriver.exe";
			System.setProperty(keyChrome, valueChrome);
			
			driver = new ChromeDriver();
		}
		
		driver.close();
	}

}
