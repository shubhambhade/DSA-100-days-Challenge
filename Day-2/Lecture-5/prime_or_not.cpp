// print number is prime or not

#include<iostream>
using namespace std;
int prime_or_not(int num)
{
    if(num < 2)
    {
        cout<<"not prime number"<<endl;
        return 0;
    }
    else
    {
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            cout<<"Not prime number......"<<endl;
            return 0;
        }
    }
    cout<<"Prime number"<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter number : "<<endl;
    cin>>num;
    prime_or_not(num);
    return 0;
}