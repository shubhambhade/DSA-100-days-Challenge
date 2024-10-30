/*
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main()
{
    
    int row_count;
    cout<<"enter row count : "<<endl;
    cin>>row_count;

    for(int i = 1; i <= row_count; i = i + 1)
    {
        for(int j = row_count; j >= 1; j = j - 1)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}