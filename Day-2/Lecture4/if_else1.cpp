#include<iostream>
using namespace std;

int main(){
    int package;
    cout<<"Enter Package Offer Ammount : "<<endl;
    cin>>package;

    if(package>10)
    {
        cout<<"Offer Accepted"<<endl;
    }
    else
    {
        cout<<"Offer Rejected"<<endl;
    }
return 0;
}