package basic_programs;

import java.util.Scanner;

public class CalculatePowerOfNumber {
    public static void main(String[] args) {
        int number , power , result = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        number = sc.nextInt();
        System.out.println("Enter Power Of Number : ");
        power = sc.nextInt();
        for(int i = 1; i <= power; i++)
        {
            result = number *result;
        }
        System.out.println("Power of Number is : "+result);
    }
}
