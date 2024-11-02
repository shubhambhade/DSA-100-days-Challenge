/*
For an input year N, find whether the year is a leap or not. 
 

Example 1:

Input:
N = 4
Output:
1
Explanation:
4 is not divisible by 100
and is divisible by 4 so its
a leap year
Example 2:

Input:
N = 2021
Output:
0
Explanation:
2021 is not divisible by 100
and is also not divisible by 4
so its not a leap year

*/

#include<iostream>
using namespace std;
class LeapYear
{
    public:

    int is_Leap_Year(int N)
    {
    if( N % 400 == 0 )
    {
        return 1;
    }
    else if(N % 4 == 0 && N % 100 != 0)
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
    int year;
    cout<<"Enter Year : "<<endl;
    cin>>year;
    LeapYear y;
    int ans = y.is_Leap_Year(year);
    cout<<ans;
return 0;
}