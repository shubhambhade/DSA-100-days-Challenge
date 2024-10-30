/*

 * * * *
 * * * *
 * * * *
 * * * *

 */

#include<iostream>
using namespace std;

void square_pattern(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    cout<<"Enter Row count number : "<<endl;
    cin>>row;
    square_pattern(row);
    return 0;
}
