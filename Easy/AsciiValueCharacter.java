package basic_programs;

import java.util.Scanner;

public class AsciiValueCharacter {
    public static void main(String[] args) {
        char ch;
        System.out.println("Enter Character : ");
        Scanner sc = new Scanner(System.in);
        ch = sc.next().charAt(0);
        if(Character.isLetter(ch))
        {
            System.out.println((int)(ch));
        }
        else {
            System.out.println("Enter valid character");
        }
    }
}
