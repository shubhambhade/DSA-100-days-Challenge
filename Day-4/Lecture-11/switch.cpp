#include<iostream>
using namespace std;

void switch_statement()
{
    int i = 1;

    switch(i)
    {
        case 2 :
        cout<<"two";
        break;

        case 1: 
        cout<<" one ";
        break;
        
        default:
        cout<<" number ";
    }
}
int main()
{
    switch_statement();
    return 0;
}