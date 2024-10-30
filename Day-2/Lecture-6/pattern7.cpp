/*
a b c d e 
a b c d e
a b c d e
a b c d e
a b c d e
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

    for(int row = starting_character; row <= (ending_character); row = row + 1)
    {
        for(int col = starting_character  ; col <= ending_character; col++)
        {
            cout<<(char)col<<" ";
        }
        cout<<endl;
    }
    return 0;
}