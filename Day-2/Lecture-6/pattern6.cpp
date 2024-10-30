/*
a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e
*/
#include<iostream>
using namespace std;

int main(){
    
    char starting_character;
    cout<<"Enter Starting character : "<<endl;
    cin>>starting_character;
    char ending_character;
    cout<<"Enter Starting character : "<<endl;
    cin>>ending_character;

    for(char row = (int)starting_character; row <= int(ending_character); row = row + 1)
    {
        for(char col = (int)starting_character  ; col <= (int)ending_character; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}