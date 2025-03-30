package basic_programs;
import java.util.Scanner;

public class ReversedNumber {
    public static void main(String[] args) {
        int number , remainder;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        number = sc.nextInt();
        System.out.print("Reversed Number : ");
        while (number > 0)
        {
            remainder = number % 10;
            System.out.print(remainder);
            number = number/10;
        }
    }
}
