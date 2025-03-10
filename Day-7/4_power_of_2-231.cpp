/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false

Constraints:

-2^31 <= n <= 2^31 - 1

*/

#include<iostream>
using namespace std;

class Power_Of_Two
{
public:
    bool isPowerOfTwo(int n) {
        
        if(n < 1)
        {
            return 0;
        }

        while(n != 1)
        {
            if(n % 2 == 1)
            {
                return 0;
            }

            n /= 2;
        }
        return 1;
    }
};
int main()
{
    int number;
    cout<<"Enter Number : "<<endl;
    cin>>number;

    Power_Of_Two p;
    int ans = p.isPowerOfTwo(number);

    cout<<ans;
    return 0;
}