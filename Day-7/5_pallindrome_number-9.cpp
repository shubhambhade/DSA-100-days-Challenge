/*
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
*/

#include<iostream>
#include<limits>
using namespace std;

class Pallindrome_Number {
public:
    bool isPalindrome(int x) {
        
        if( x < 0)
        return 0;

        int num = x , ans = 0 , remainder;

        while(num )
        {
            remainder = num % 10;

            num = num / 10;
            if(ans >numeric_limits<int>::max() / 10)
            return 0;
            ans = ans * 10 + remainder;
        }

        if(ans == x)
        {
            return 1;
        }
        else
        {
            return 0;

        }
    }
};

int main()
{
    int number;
    cout<<"Enter Number : "<<endl;
    cin>>number;
    Pallindrome_Number pn;
    int answer = pn.isPalindrome(number);
    cout<<answer;
    return 0;
}