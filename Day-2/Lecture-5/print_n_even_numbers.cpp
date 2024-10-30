
// print n even numbers.
// print n odd numbers.

#include<iostream>
using namespace std;

void Print_Even_Numbers(int n)
{
    cout<<"Even Numbers : "<<endl;
    for(int count = 1; count <= n; count++)
    {
        if(count % 2 == 0)
        {
            cout<<count<<endl;
        }
    }
    
}
void Print_Odd_Numbers(int n)
{
    cout<<"Odd Numbers : "<<endl;
    for(int count = 1; count <= n; count++)
    {
        if(count % 2 != 0)
        {
            cout<<count<<endl;
        }
    }
    
}
int main(){
    int n;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    // function call
    Print_Even_Numbers(n);
    Print_Odd_Numbers(n);
    return 0;
}