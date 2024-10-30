// calculate factorial.

#include<iostream>
using namespace std;

void calculate_Factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {    
        fact = fact * i;
    }

    if(n == 0 || n == 1)
    {
        cout<<"Factorial : "<<fact;
    }
    else
    {
    cout<<"Factorial : "<<fact<<endl;
    }
}
int main()
{
    int number;
    cout<<"Enter number : "<<endl;
    cin>>number;
    calculate_Factorial(number);
    return 0;
}