package basic_programs;

import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        int number , remainder, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        number = sc.nextInt();
        while (number > 0)
        {
            remainder = number % 10;
            sum = sum + remainder;
            number = number/10;
        }
        System.out.println("Sum of Digits : "+ sum);
    }
}
