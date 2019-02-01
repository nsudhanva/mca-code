package pes;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

public class DemoGet {

	public static void main(String[] args) {
		String key = "webdriver.chrome.driver";
		String value = "./drivers/chromedriver.exe";
		System.setProperty(key, value);
		
		WebDriver driver = new ChromeDriver();
		
		driver.get("https://www.google.com");
		
		String title = driver.getTitle();
		System.out.println("Title: " + title);
		
		String currentUrl = driver.getCurrentUrl();
		System.out.println("URL: " + currentUrl);
		
		String pageSrc = driver.getPageSource();
		System.out.println("Page Source: " + pageSrc);
		
		driver.manage().deleteAllCookies();
		
		driver.get("http://seleniumhq.org/download");
		
		driver.navigate().to("https://www.google.com");
		
		driver.navigate().back();
		
		driver.navigate().forward();
		
		driver.get("C:\\Users\\Sudhanva\\Desktop\\hello\\index.html");
		
		driver.findElement(By.id("fp")).click();
		driver.navigate().back();
		
		driver.findElement(By.name("pass")).click();
		driver.navigate().back();
		
		driver.findElement(By.className("forgot")).click();
		driver.navigate().back();
		
		driver.findElement(By.tagName("a")).click();
		driver.navigate().back();
		
		driver.findElement(By.linkText("Inbox(10)")).click();
		driver.navigate().back();
		
		driver.findElement(By.partialLinkText("Inbox")).click();
		driver.navigate().back();
				
		driver.quit();
	}

}
