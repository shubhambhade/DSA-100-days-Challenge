#include<iostream>
using namespace std;

bool prime(int n)
{
    if(n < 2 )
    {
        return 0;
    }

    for(int i = 2; i <n ; i++)
    {
        if( n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int factorial(int n)
{
    if( n == 0 && n == 1 )
    return 1;

    int ans = 1;
    for(int i = 1; i <= n ; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int a , b;
    cout<<"Enter value of a : "<<endl;
    cin>>a;
    cout<<"Enter value of b : "<<endl;
    cin>>b;

    // a is prime or not
    bool ans = prime(a);
    cout<<ans<<endl;
    // find factorial of a
    int fact = factorial(a);
    cout<<fact<<endl;
    // b is prime or not
    cout<<prime(b)<<endl;
    // find factorial of b
    cout<<factorial(b)<<endl;
    // a - b is prime or not
    cout<<prime(a - b)<<endl;
    // find factorial of a -b
    cout<<factorial(b - a)<<endl;
    return 0;
}