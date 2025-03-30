package basic_programs;

import java.util.Scanner;

public class CharacterCaseConversion {
    public static void main(String[] args) {
        char ch;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Character : ");
        ch = sc.next().charAt(0);
        if(Character.isLetter(ch))
        {
            if(ch >= 'A' && ch <= 'Z' ) {
                System.out.println(Character.toLowerCase(ch));
            }
            else {
                System.out.println(Character.toUpperCase(ch));
            }
        }
        else {
            System.out.println("Enter valid character..........");
        }
    }
}
