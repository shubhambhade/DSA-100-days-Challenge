/*
a 
b b
c c c
d d d d
e e e e e
*/

#include<iostream>
using namespace std;

int main()
{
    char starting_character , ending_character;
    cout<<"Enter starting character : "<<endl;
    cin>>starting_character;
    cout<<"Enter ending character : "<<endl;
    cin>>ending_character;

    for( int i = starting_character; i <= ending_character; i++)
    {
        for( int j = starting_character; j <= i; j++)
        {
            cout<<(char)i<<" ";
        }
        cout<<endl;
    }
    return 0;
}