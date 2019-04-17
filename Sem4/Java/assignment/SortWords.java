import java.util.Scanner;

class SortWords {
    public static void main(String[] args) {
        System.out.println("Enter a list of 10 words: ");
        Scanner sc = new Scanner(System.in);
        String strings[] = new String[10];

        for (int i = 0; i < 10; i++) {
            strings[i] = sc.nextLine();
        }

        for (int i = 0; i < 10; ++i) {
            for (int j = i + 1; j < 10; ++j) {
                if (strings[i].compareTo(strings[j]) > 0) {

                    String temp = strings[i];
                    strings[i] = strings[j];
                    strings[j] = temp;
                }
            }
        }

        System.out.println("Lexicographical order: ");
        for (int i = 0; i < 10; i++) {
            System.out.println(strings[i]);
        }

    }
}