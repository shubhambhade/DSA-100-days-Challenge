#include<iostream>
using namespace std;

void decimal_to_binary(int num)
{
    int remainder , mul = 1, ans = 0;

    while(num > 0)
    {
    // remainder
    remainder = num % 2 ;
    //quotient
    num = num / 2;

    // answer
    ans = remainder * mul + ans;
    mul = mul * 10;
    
    }
    cout<<ans;
}
int main()
{
    int number;
    cout<<"Enter NUmber : "<<endl;
    cin>>number;
    decimal_to_binary(number);
    return 0;
}