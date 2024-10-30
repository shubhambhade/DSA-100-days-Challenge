
// calculate the power of number.
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : "<<endl;
    cin>>number;
    int power_of_number;
    cout<<"Enter the power : "<<endl;
    cin>>power_of_number;

    int num = number;
    for( int i = 1; i < power_of_number; i++)
    {
        num = num*number;
    }
    cout<<"Result : "<<num<<endl;

    return 0;
}