/*
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter Row Count : "<<endl;
    cin>>row;

    for(int i = 1; i <= row; i++)
    {
        for(int j = row; j >= row-(i-1); j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}