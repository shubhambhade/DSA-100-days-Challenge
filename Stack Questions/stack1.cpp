#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation of stack
    stack<int> s;
    //push operation
    s.push(10);
    s.push(20);

    //pop operation
    s.pop();

    cout<<"printing top element : "<<s.top()<<endl;

    if(s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    cout<<"size of stack is : "<<s.size()<<endl;
    
    return 0;
}