package pes;

import org.openqa.selenium.firefox.FirefoxDriver;

public class Demo {

	public static void main(String[] args) {
		String key = "webdriver.gecko.driver";
		String value = "./drivers/geckodriver.exe";
		System.setProperty(key, value);
		
		FirefoxDriver f = new FirefoxDriver();
		f.close();
	}

}
