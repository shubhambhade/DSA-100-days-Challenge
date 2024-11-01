#include<iostream>
using namespace std;

void airthmetic_operators()
{
    cout<<"******Airthmetic Operator*********"<<endl;
    int a  , b ;

    cout<<"Enter value of a : "<<endl;
    cin>>a;
    cout<<"Enter value of b : "<<endl;
    cin>>b;

    // 1) Binary operator

    // addition operator
    cout<<" a + b : "<<(a+b)<<endl;
    //substraction operator
    cout<<" a - b : "<<(a-b)<<endl;
    //multiplication operator
    cout<<" a * b : "<<(a*b)<<endl;
    // division operator
    cout<<" a / b : "<<(a/b)<<endl;
    // modulo operator written remainder
    cout<<" a % b : "<<(a%b)<<endl;

    // 2) unary operator

    // post increment
    int c = 10;
    cout<<"post increment : "<< c++<<endl;
    cout<<"c :"<<c<<endl;

    // post decrement
    int d = 10;
    cout<<"post decrement : "<<d--<<endl;
    cout<<"d : "<<d<<endl;

    // pre increment
    int num = 10;
    cout<<"pre increment : "<<++num<<endl;

    // pre decrement
    int num1 = 10;
    cout<<"pre decrement : "<<--num1<<endl;
}

void comparison_operator()
{
    cout<<"\n*****Comparison Operator****"<<endl;

    float num1 = 12.2 , num2 = 10.2;

    cout<<"Enter value of num1 : "<<endl;
    cin>>num1;
    cout<<"Enter value of num2 : "<<endl;
    cin>>num2;

    cout<<"== operator : "<<(num1 == num2)<<endl;
    cout<<"< operator : "<<(num1 < num2)<<endl;
    cout<<"> operator : "<<(num1 > num2)<<endl;
    cout<<"<= operator : "<<(num1 <= num2)<<endl;
    cout<<">= operator : "<<(num1 >= num2)<<endl;
    cout<<"!= operator : "<<(num1 != num2)<<endl;
}

void logical_operatro()
{
    cout<<"\n*******Logical Operator*******"<<endl;

    int a  , b ;
    cout<<"Enter value of a : "<<endl;
    cin>>a;
    cout<<"Enter value of b : "<<endl;
    cin>>b;

    cout<<"&& operator : "<<((a==b)&&(a != b))<<endl;
    cout<<"&& operator : "<<((a==b)||(a != b))<<endl;
    cout<<"&& operator : "<<(!(a != b))<<endl;
}

void bitwise_operator()
{
    cout<<"\n*******Bitwise Operator********"<<endl;

    cout<<"& operator : "<<(2&3)<<endl; // ans =2
    cout<<"| operator : "<<(2|3)<<endl; // ans = 3
    cout<<"^ operator : "<<(2^3)<<endl; //ans = 1
    cout<<"<< operator : "<<(2<<3)<<endl; //ans = 16
    cout<<">> operator : "<<(2>>3)<<endl; //ans = 0
    cout<<"~ operator : "<<(~3)<<endl; //ans = -4
}

void assignment_operator()
{
    int a = 2; 
    cout<<a<<endl;
    a += 15; // a = a + 15
    cout<<a<<endl;
    a -= 15; // a = a - 15
    cout<<a<<endl;
    a *= 15; // a = a * 15
    cout<<a<<endl;
    a /= 15; // a = a / 15
    cout<<a<<endl;
    a %= 15; // a = a % 15
    cout<<a;
}
int main()
{
    airthmetic_operators();
    comparison_operator();
    logical_operatro();
    bitwise_operator();
    assignment_operator();
    return 0;
}