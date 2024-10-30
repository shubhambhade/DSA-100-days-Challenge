#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number : "<<endl;
    cin>>number;
    if(number == 0)
    {
        cout<<"zero number"<<endl;
    }
    else
    {
        if(number>0)
        {
            cout<<"Positive Number"<<endl;
        }
        else
        {
            cout<<"Negative Number"<<endl;
        }
    }
    return 0;
}