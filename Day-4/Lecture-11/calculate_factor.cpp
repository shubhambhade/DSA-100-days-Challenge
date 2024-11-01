#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter Number : "<<endl;
    cin>>number;

    int i = 1;

    while( i <= number)
    {
        if(number % i == 0)
        {
            cout<<i<<" ";
        }

        i++;
    }
    return 0;
}