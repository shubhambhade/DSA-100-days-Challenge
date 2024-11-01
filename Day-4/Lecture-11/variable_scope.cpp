#include<iostream>
using namespace std;

int num = 10; //global variable
void variable_scope()
{
    if(num == 10)
    {
        int num = 19; // local variable
        cout<<"num : "<<num<<endl;;
    }
    cout<<"num : "<<num<<endl;
}
int main()
{
    variable_scope();
    return 0;
}