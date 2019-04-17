import java.util.Scanner;

class InsertString {
    public static void main(String[] args) {
        System.out.println("Enter a string: ");
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();

        System.out.println("Enter the string to be inserted: ");
        String str2 = sc.nextLine();

        int position;
        System.out.println("Enter the position to be inserted: ");
        position = sc.nextInt();

        StringBuilder strB = new StringBuilder(str1);
        strB.insert(position, 's');

        System.out.println(strB.toString());
    }
}