#include<iostream>
using namespace std;

char convert( int name)
{
    char ans = name - 'a' + 'A';
    return ans;
}
int main()
{
    char name;
    cout<<"Enter Character : "<<endl;
    cin>>name;

    cout<<convert(name)<<endl;
return 0;
}