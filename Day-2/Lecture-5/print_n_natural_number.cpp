
// print n natural numbers
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    cout<<"Print n natural number : "<<endl;
    for(int i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }

    cout<<"Print square of n numbers : "<<endl;
    for(int count = 1; count <= n; count++)
    {
        cout<<count*count<<endl;
    }
    return 0;
}