#include<iostream>
using namespace std;

void decimal_to_octal(int num)
{
    cout<<"Decimal Number : "<<num<<endl;
    int rem , ans = 0 , mul = 1;

    while(num > 0)
    {
        // remainder
        rem = num % 8;
         // divide
        num = num / 8;
         // answer
        ans = rem * mul + ans;
        
        mul = mul * 10;
    }
    cout<<"Octal Number : "<<ans<<endl;

}
int main()
{
    int number;
    cout<<"Enter number : "<<endl;
    cin>>number;
    decimal_to_octal(number);
    
return 0;
}