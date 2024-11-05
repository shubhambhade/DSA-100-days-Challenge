#include<iostream>
using namespace std;

int sum(int a , int b) // function declare
{
    int c = a + b; // function define
    return c;
}
int mul(int m , int n) // multiple parameter
{
    int mul = m * n ;
    return mul;
}
void fun()
{
    cout<<"\nFunction concept lecture";
}
int main()
{
    int num1 , num2;
    cout<<"Enter value of num1 : "<<endl;
    cin>>num1;
    cout<<"Enter value of num2 : "<<endl;
    cin>>num2;

    //function call
    int ans = sum(num1 , num2); // arguments
    cout<<"Sum : "<<ans;

    int multiplication = mul(num1 , num2);
    cout<<"\nMultiplication : "<<multiplication;

    fun();
    return 0;
}