/*
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;

int main()
{
    
    int row_count;
    cout<<"enter row count : "<<endl;
    cin>>row_count;

    for(int i = 1; i <= row_count; i++)
    {
        for(int j = 0; j < row_count; j = j + 1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}