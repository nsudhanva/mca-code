package pes;

import org.openqa.selenium.chrome.ChromeDriver;

public class DemoChrome {

	public static void main(String[] args) {
		String key = "webdriver.chrome.driver";
		String value = "./drivers/chromedriver.exe";
		System.setProperty(key, value);
		
		ChromeDriver f = new ChromeDriver();
		f.close();

	}

}
