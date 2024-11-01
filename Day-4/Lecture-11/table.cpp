#include<iostream>
using namespace std;

int main(){
    
    int table_number;
    cout<<"Enter table number : "<<endl;
    cin>>table_number;

    int i = 1;

    while(i <= 10)
    {
        cout<<table_number<<"*"<<i<<" = "<< table_number*i<<endl;
        i++;
    }
    return 0;
}