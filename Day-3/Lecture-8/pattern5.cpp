/*
        1 
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Row Count : "<<endl;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
        {
            cout<<"  ";
        }
        for( int k = i; k >= 1; k--)
        {
            cout<<k<<" ";
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
//             // Print spaces until reaching the start of the numbers
//             if (j <= n - i)
//                 cout << "  ";
//             // Print decreasing numbers after the spaces
//             else
//                 cout << (i - (j - (n - i))) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
