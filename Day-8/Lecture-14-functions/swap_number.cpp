#include<iostream>
using namespace std;

void Swap (int &n1, int &n2) // pass by reference
{
    int n3;

    n3 = n1;
    n1 = n2;
    n2 = n3;
}

// function overloading
void Swap( float &c , float &d)
{
float r = c;
c=d;
d=r;
}
int main()
{
    int a ; 
    int b;
    cout<<"Enter value of a : "<<endl;
    cin>>a;
    cout<<"Enter value of b : "<<endl;
    cin>>b;

    Swap( a, b);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    float f1 = 3.6, f2= 4.5;
    Swap(f1, f2);
    cout<<"f1 : "<<f1<<endl;
    cout<<"f2 : "<<f2<<endl;

    return 0;
}