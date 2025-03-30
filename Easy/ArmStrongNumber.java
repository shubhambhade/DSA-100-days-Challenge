package basic_programs;

import java.util.Scanner;

public class ArmStrongNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int number = sc.nextInt();

        int originalNumber = number;
        int digitCount = 0, remainder, sum = 0, temp = number;

        // Count digits
        while (temp > 0) {
            temp /= 10;
            digitCount++;
        }
        temp = number;
        while (temp > 0) {
            remainder = temp % 10;
            sum += Math.pow(remainder, digitCount);
            temp /= 10;
        }
        if (originalNumber == sum) {
            System.out.println(originalNumber + " is an Armstrong Number.");
        } else {
            System.out.println(originalNumber + " is NOT an Armstrong Number.");
        }
    }
}
