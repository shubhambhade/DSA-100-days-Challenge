/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0

Constraints:

0 <= num <= 2^31 - 1

Follow up: Could you do it without any loop/recursion in O(1) runtime?
*/

#include<iostream>
using namespace std;

class AddDigit
{
    public:
    int add_digit(int num)
    {

        while(num > 10)
        {

        int remainder , ans = 0;

        while(num != 0)
        {
            remainder = num % 10;

            num = num /10;

            ans = ans + remainder;
        }
        num = ans;

        }
        return num;
    }
};

int main()
{
    int number;
    cout<<"Enter Number : "<<endl;
    cin>>number;

    AddDigit obj;
    int num = obj.add_digit(number);
    cout<<"Ans : "<<num;
    
    return 0;
}