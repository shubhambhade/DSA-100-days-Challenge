/*
    1
   12
  123
 1234
12345
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Row Count : "<<endl;
    cin>>n;

    for( int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter Row Count: " << endl;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j <= n - i)
//                 cout << " ";
//             else
//                 cout << j - (n - i);
//         }
//         cout << endl;
//     }

//     return 0;
// }
