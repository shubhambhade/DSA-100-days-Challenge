#include<iostream>
using namespace std;

void even_numbers(int number)
{
    int i = 1;

    while (i <= number)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;  
    }
    cout << endl; 
}

void odd_numbers(int number)
{
    int i = 1;

    while (i <= number)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        i++;  
    }
    cout << endl;
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Even numbers: ";
    even_numbers(number);

    cout << "Odd numbers: ";
    odd_numbers(number);

    return 0;
}
