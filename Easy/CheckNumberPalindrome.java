package basic_programs;
import java.util.Scanner;

public class CheckNumberPalindrome {
    public static void main(String[] args) {
        int number , remainder;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        number  =  sc.nextInt();
        int num = number, num1 = 0;
        while (number > 0)
        {
            remainder =  number % 10;
            num1 = (num1 * 10)+remainder;
            number = number / 10;
        }
        if(num == num1)
        {
            System.out.println("Number is palindrome.........");
        }
        else {
            System.out.println("Number is not palindrome............");
        }
    }
}
