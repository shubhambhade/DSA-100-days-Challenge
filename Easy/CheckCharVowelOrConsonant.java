package basic_programs;
import java.util.Scanner;

public class CheckCharVowelOrConsonant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Character: ");
        char ch = sc.next().charAt(0);
        // Using contains() for efficient checking
        String vowels = "AEIOUaeiou";
        if (vowels.indexOf(ch) != -1) {
            System.out.println("Character is a Vowel");
        } else if (Character.isLetter(ch)) { // Check if it's an alphabet
            System.out.println("Character is a Consonant");
        } else {
            System.out.println("Invalid input! Please enter an alphabet.");
        }
    }
}
