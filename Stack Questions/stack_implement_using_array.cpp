#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;

    public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    //push
    void push(int value)
    {
        if(top == size-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" Into the stack\n";
        }
    }
    //pop
    void pop()
    {
        if(top == -1)
        {
            cout<<"stack underflow\n"<<endl;
        }
        else
        {
            top--;
            cout<<"popped "<<arr[top + 1]<< " from the stack"<<endl;
        }
    }
    //peek
    int peek()
    {
        if(top == -1)
        {
            cout<<"stack is empty\n"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    //isEmpty
    bool isEmpty()
    {
        return top == -1;
    }
    //isSize
    int isSize()
    {
        return top + 1;
    }
};
int main()
{
    Stack s(5);
    s.push(5);
    s.push(6);
    s.push(8);
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.isSize()<<endl;
    return 0;
}