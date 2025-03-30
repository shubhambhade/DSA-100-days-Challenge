package basic_programs;

import java.util.Scanner;

public class SwapNumberWithout3rdVariable {
    public static void main(String[] args) {
        int number1 , number2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number1 value : ");
        number1 = sc.nextInt();
        System.out.println("Enter Number2 value : ");
        number2 = sc.nextInt();
        System.out.println("Before Swapping  ");
        System.out.println("Number1 : "+number1);
        System.out.println("Number2 : "+number2);
        //swapping logic
        number1 = number1 + number2;
        number2 = number1 - number2;
        number1 = number1 - number2;
        System.out.println("After Swapping : ");
        System.out.println("Number1 : "+number1);
        System.out.println("Number2 : "+number2);
    }
}
