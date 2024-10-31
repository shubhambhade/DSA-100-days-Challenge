/*
1
1 2
1 2 3
1 2 3 4
*/

#include<iostream>
using namespace std;

void number_triangle(int num)
{
    for(int row = 0; row <= num; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row;
    cout<<"Enter Row Count : "<<endl;
    cin>>row;
    number_triangle(row);
    return 0;
}