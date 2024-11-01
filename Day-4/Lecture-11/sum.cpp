
#include<iostream>
using namespace std;

void sum(int n)
{
    int sum = 0;
    int i = 1;
    do
    {
        sum = sum + i;
        i++;
    }
    while(i <= n);

    cout<<"sum : "<<sum;
}
int main()
{
    int num;
    cout<<"Enter number : "<<endl;
    cin>>num;
    sum(num);
    return 0;
}