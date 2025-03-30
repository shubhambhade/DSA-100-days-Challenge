package basic_programs;

import java.util.Scanner;

public class SquareRootOfNumber {
    public static void main(String[] args) {
        int number;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        number = sc.nextInt();
        double square_root = Math.sqrt(number);
        System.out.println("Square root of "+ number +" is : "+square_root);
    }
}
