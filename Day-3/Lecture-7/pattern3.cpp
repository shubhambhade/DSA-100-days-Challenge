/*
1 
2 2
3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

int main(){
    int row_count;
    cout<<"Enter row count : "<<endl;
    cin>>row_count;

    int row , col;

    for(row = 1; row <= row_count; row = row + 1 )
    {
        for( col = 1; col <= row; col = col + 1)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }

    return 0;
}