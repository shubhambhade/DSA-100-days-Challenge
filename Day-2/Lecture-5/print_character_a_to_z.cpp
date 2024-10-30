
// print character a to z.
// print character A to Z.

#include<iostream>
using namespace std;

void capital_Characters(char character)
{
    cout<<"Capital characters"<<endl;
    for(char count = character; count <='Z'; count++)
    {
        cout<<count<<" = "<<(int)count<<endl;
        character+1;
    }
}
void small_Characters(char character)
{
    cout<<"small characters : "<<endl;
    for(char count = character; count <='z'; count++)
    {
        cout<<count<<" = "<<(int)count<<endl;
        character+1;
    }
}
int main()
{
    char small_character;
    small_character ='a';
    small_Characters(small_character);
    char capital_character;
    capital_character = 'A';
    capital_Characters(capital_character);
    return 0;
}