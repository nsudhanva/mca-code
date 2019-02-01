package pes;

import java.util.ArrayList;
import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

public class DemoArrayList {

	public static void main(String[] args) {
		List<String> al = new ArrayList<>();
		
		al.add("a");
		al.add("b");
		al.add("b");
		al.add(null);
		
		int n = al.size();
		System.out.println(n);
		
		for(int i = 0; i < n ; i++) {
			String s = al.get(i);
			System.out.println(s);
		}
		
		WebDriver driver = new ChromeDriver();
		driver.manage().window().maximize();
		driver.get("C:\\Users\\Sudhanva\\Desktop\\hello\\spider.html");
		
		List<WebElement> allLinks = driver.findElements(By.xpath("//a"));
		
		int count = allLinks.size();
		System.out.println(count);
		
		for(int i = 0; i < count; i++) {
			WebElement link = allLinks.get();
			String text = link.getText();
			System.out.println(text);
		}
		driver.close();
	}

}
