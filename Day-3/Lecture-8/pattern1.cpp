/*
    *
   **
  ***
 ****
*****
*/

#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter Row Count : "<<endl;
    cin>>row;

    for( int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row- i; j++ )
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


// #include<iostream>
// using namespace std;

// int main(){
//     int row;
//     cout << "Enter Row Count: " << endl;
//     cin >> row;

//     for (int i = 1; i <= row; i++) {
//         // Print spaces and stars in one loop
//         for (int j = 1; j <= row; j++) {
//             if (j <= row - i)
//                 cout << " ";
//             else
//                 cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }