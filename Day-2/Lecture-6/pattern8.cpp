/*
1  2  3  4  5 
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter row count : "<<endl;
    cin>>row;

    int count = 1;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <=row; j++)
        {
            cout<<count<<" ";
            count = count + 1;
        }
        cout<<endl;
    }
    return 0;
}