#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int i = 1;

    while(i <= n)
    {
        if(i == 4)
        {
            break;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}