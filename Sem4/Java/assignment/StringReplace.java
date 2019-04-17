import java.util.Scanner;

class StringReplace {
    public static void main(String[] args) {
        System.out.println("Enter a string: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        System.out.println("Enter the string to be replaced: ");
        String char1 = sc.nextLine();

        System.out.println("Enter the string to be replaced with: ");
        String char2 = sc.nextLine();

        System.out.println("Replaced String: " + str.replace(char1, char2));

    }
}