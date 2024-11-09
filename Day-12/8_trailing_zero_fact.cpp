/*
For an integer N find the number of trailing zeroes in N!.

Example 1:

Input:
N = 5
Output:
1
Explanation:
5! = 120 so the number of trailing zero is 1.
Example 2:

Input:
N = 4
Output:
0
Explanation:
4! = 24 so the number of trailing zero is 0.
*/

#include<iostream>
using namespace std;

class Trailing_zeros
{
public:
    int trailingZeroes(int N)
    {
       int count = 0;
       
       while(N>=5)
       {
           count += N/5;
           N/=5;
       }
       return count;
    }
};

int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    
    Trailing_zeros obj;
    int result = obj.trailingZeroes(n);
    cout<<"Zero count : "<<result;
    return 0;
}