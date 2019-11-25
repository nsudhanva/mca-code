import java.lang.reflect.Method;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
//import java.lang.reflect.Class;


//THis is a constructor
//class Demo

//Demo.getAuthor()
//public void Demo.getTitle()

public class Demo {
	private int id;
	
	Demo(){
		System.out.println("THis is a constructor");
	}
	
	public void getAuthor() {
		System.out.println("This is the author method");
	}
	
	public void getTitle() {
		System.out.println("This is the author method");
	}
}

class Book {
	public static void main(String args[]) {
		Demo demo = new Demo();
		
		Class<?> cls = demo.getClass();
		
		Method[] methods = cls.getMethods();
		
		for(Method i : methods) {
			System.out.println(i);
		}
		
		Field field;
		try {
			field = cls.getDeclaredField("id");
			System.out.print(field);

		} catch (NoSuchFieldException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SecurityException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
//		cls.getDe
	}
}