/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
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
        for(int j = 1; j <= row_count; j = j + 1)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}