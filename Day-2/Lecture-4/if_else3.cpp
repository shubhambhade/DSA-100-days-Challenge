#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    if(age < 18)
    {
        cout<<"you cannot vote"<<endl;
        cout<<"you cannot drive"<<endl;
        cout<<"teenager"<<endl;
    }
    else
    {
        cout<<"you can vote"<<endl;
        cout<<"you can drive"<<endl;
        cout<<"adult"<<endl;
    }
    
    return 0;
}