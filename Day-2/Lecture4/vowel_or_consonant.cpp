#include<iostream>
using namespace std;

int main()
{
    //vowel -- > a, e, i, o, u
    char character;
    cout<<"Enter Character : "<<endl;
    cin>>character;

    if(character == 'a' || character == 'e' || character == 'i' )
    {
        cout<<"Vowel"<<endl;
    }
    else if (character == 'o' || character == 'u'){
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonant"<<endl;
    }
    return 0;
}