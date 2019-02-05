package pes;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

public class DemoWait {

	public static void main(String[] args) {
		WebDriver driver = new ChromeDriver()
		driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS)
	}

}
