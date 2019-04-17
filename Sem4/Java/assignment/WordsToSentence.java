import java.util.Scanner;

class WordsToSentence {
    public static void main(String[] args) {
        System.out.println("Enter a list of 10 words: ");
        Scanner sc = new Scanner(System.in);
        String[] strings = new String[10];

        for (int i = 0; i < 10; i++) {
            strings[i] = sc.nextLine();
        }

        String str = String.join(", " , strings);

        System.out.println("Final Joined String: " + str);
    }
}