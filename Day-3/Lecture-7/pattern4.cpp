/*
1 
2 1
3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int row_count;
    cout<<"Enter Row Count : "<<endl;
    cin>>row_count;

    int row , col;

    for( row = 1; row <= row_count; row++)
    {
        for(col = row; col >= 1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}