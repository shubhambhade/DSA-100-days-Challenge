package basic_programs;

import java.util.Scanner;

public class PrintPrime {
    public static void main(String[] args) {
        int number, i , j , sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number : ");
        number = sc.nextInt();
        if(number < 2)
        {
            System.out.println("Not Prime Number");
            return;
        }
        else {
            for( i = 2; i <= number; i++)
            {
                for( j = 2; j <= number; j++)
                {
                    if(i % j == 0)
                    {
                        break;
                    }
                }
                if(i == j){
                System.out.println(j+" ");
                sum += j;
                }
            }
            System.out.println("Sum : "+sum);
        }
    }
}
