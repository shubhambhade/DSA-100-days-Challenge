/*

* 
* * 
* * * 
* * * *
* * * * *

*/
#include<iostream>
using namespace std;

void triangle_pattern(int n)
{
    for(int i = 0; i < n; i = i + 1 )
    {
        for( int j = 0; j <= i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"Enter Row Count : "<<endl;
    cin>>row;
    triangle_pattern(row);
    return 0;
}