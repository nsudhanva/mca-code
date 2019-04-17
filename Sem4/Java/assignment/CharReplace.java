import java.util.Scanner;

class CharReplace {
    public static void main(String[] args) {
        System.out.println("Enter a string: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        System.out.println("Enter the character to be replaced: ");
        String char1 = sc.nextChar();

        System.out.println("Enter the character to be replaced with: ");
        String char2 = sc.nextChar();

        System.out.println("Replaced Char String: " + str.replaceAll(char1, char2));
    }
}