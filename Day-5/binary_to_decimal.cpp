#include<iostream>
using namespace std;

void binary_to_decimal(int num)
{
    cout<<"Binary Number : "<<num<<endl;
    int remainder , ans = 0, mul = 1 ;

    while(num > 0)
    {
        // remainder
        remainder = num % 10;
        //divide
        num = num  / 10;
        //answer
        ans = remainder * mul + ans;

        mul = mul * 2;
    }
    cout<<"Decimal Number : "<<ans<<endl;
}
int main()
{
    int number;
    cout<<"Enter Binary Number : "<<endl;
    cin>>number;
    binary_to_decimal(number);
    return 0;
}