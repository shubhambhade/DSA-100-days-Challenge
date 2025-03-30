package basic_programs;

import java.util.Scanner;

public class DigitCounts {
    public static void main(String[] args) {
        int number;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        number = sc.nextInt();
        int count = 0;
        if(number == 0)
        {
            System.out.println("Digits count : "+ 1);
        }
        else {

            while (number >  0)
            {
                number = number/10;
                count++;
            }
            System.out.println("Digit counts : "+count);
        }
    }
}
