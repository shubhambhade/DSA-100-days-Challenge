/*

        A 
      A B
    A B C
  A B C D
A B C D E
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter row Count : "<<endl;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        char character = 'A';
        for(int j = 1; j <= n; j++)
        {
            if(j <= (n -i))
            {
                cout<<" "<<" ";
            }
            else
            {
                cout<<character<<" ";
                character++;
            }
        }
        cout<<endl;
    }
    return 0;
}