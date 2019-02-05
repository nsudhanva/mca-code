package pes;
package pes;

import java.util.ArrayList;
import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

public class DemoLink {

	public static void main(String[] args) {
		List<WebElement> allCB = driver.findElements(By.xpath("//input[@type='checkbox']"));
		
		int count = allCB.size();
		System.out.println(count);
		
		
		for(int i = 0; i < count; i++) {
			WebElement cb = allCB.get(i);
			cb.click();
			Thread.sleep(1000);
		}
		
		driver.close();
	}

}
