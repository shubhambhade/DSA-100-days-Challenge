#include<iostream>
using namespace std;

int main(){
    int number1 , number2;
    cout<<"Enter 1st number : "<<endl;
    cin>>number1;
    cout<<"Enter 2nd number : "<<endl;
    cin>>number2;

    // find greatest number
    if(number1 > number2)
    {
        cout<<number1<<" is greater"<<endl;
    }
    else
    {
        cout<<number2<<" is greater"<<endl;
    }
return 0;
}