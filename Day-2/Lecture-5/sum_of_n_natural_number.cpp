
// sum of n natural number.

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter number : "<<endl;
    cin>>number;
    int sum = 0;

    for(int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    cout<<"Sum : "<<sum<<endl;

    //solve using formula without using loop.
    cout<<"Sum : "<<(number*(number+1))/2<<endl;
    return 0;
}