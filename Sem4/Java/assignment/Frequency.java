import java.util.Scanner;

class Frequency {
    public static void main(String[] args) {
        System.out.println("Enter a strings: ");
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();

        System.out.println("Enter the string to be counted: ");
        String str2 = sc.nextLine();

        System.out.println(StringUtils.countMatches(str1, str2));
    }
}