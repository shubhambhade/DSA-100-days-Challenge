/*
Problem Description

Given the position of a Bishop (A, B) on an 8 * 8 chessboard.

Your task is to count the total number of squares that can be visited by the Bishop in one move.

The position of the Bishop is denoted using row and column number of the chessboard.

Problem Constraints
1 <= A, B <= 8

Input Format
First argument is an integer A denoting the row number of the bishop.

Second argument is an integer B denoting the column number of the bishop.

Output Format
Return an integer denoting the total number of squares that can be visited by the Bishop in one move.

Example Input
Input 1:

 A = 4
 B = 4

Example Output
Output 1:

 13
*/
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int A, int B) 
{
    int count = 0;
    
    // Calculating moves in each diagonal direction
    count += min(8 - A, 8 - B);  // Bottom-right diagonal
    count += min(8 - A, B - 1);  // Bottom-left diagonal
    count += min(A - 1, B - 1);  // Top-left diagonal
    count += min(A - 1, 8 - B);  // Top-right diagonal
    
    return count;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    int result = solve(a, b);
    cout << "The number of squares that can be visited by the Bishop in one move: " << result << endl;

    return 0;
}
