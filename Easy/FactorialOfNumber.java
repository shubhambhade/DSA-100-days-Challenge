package basic_programs;

import java.util.Scanner;

public class FactorialOfNumber {
    public static void main(String[] args) {
        int number;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter Number : ");
        number = sc.nextInt();
        int fact = 1;
        if(number == 0)
        {
            System.out.println("Factorial of "+number+"!"+" : "+1);
        }
        else {
            for(int i = 1; i <= number; i++)
            {
                fact = fact*i;
            }
            System.out.println("Factorial of "+number+"!"+" : "+fact);
        }
    }
}
