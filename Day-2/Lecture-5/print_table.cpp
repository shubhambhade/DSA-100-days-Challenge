
//print table

#include<iostream>
using namespace std;

int main()
{
    int table_number;
    cout<<"Enter table number : "<<endl;
    cin>>table_number;

    for( int i = 1; i<=10 ; i++)
    {
        cout<<table_number<<" * "<<i<<" = "<<table_number*i<<endl;
    }

    return 0;
}