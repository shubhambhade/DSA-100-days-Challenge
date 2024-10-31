/*

*/

#include<iostream>
using namespace std;

int main(){
    int n , row, col;
    cout<<"Enter row count : "<<endl;
    cin>>n;
     // Upper half of the diamond
    for(int row = 1; row <= n; row++) {
        // Print spaces
        for(int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        // Print stars
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    // Lower half of the diamond
    for(int row = n - 1; row >= 1; row--) {
        // Print spaces
        for(int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        // Print stars
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}