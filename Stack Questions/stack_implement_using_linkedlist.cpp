#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Stack
{
    Node *top;
    int size;

    public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int value)
    {
        Node *temp = new Node(value);
        if(temp == NULL)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
        temp->next = top;
        top = temp;
        size++;
        cout<<"Pushed "<<value<<" into the stack\n"<<endl;
        }
    }
    void pop()
    {
        if(top == NULL)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            Node *temp = top;
            cout<<"Popped "<<top->data<<" from the stack\n"<<endl;           
            top = temp -> next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if(top == NULL)
        {
            cout<<"stack is empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    int isSize()
    {
        return size;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout<<s.isSize()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}