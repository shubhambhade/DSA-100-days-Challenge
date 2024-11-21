/*
Problem Description

Given an one-dimensional unsorted array A containing N integers.

You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

Return 1 if any such pair exists else return 0.



Problem Constraints
1 <= N <= 105
-103 <= A[i] <= 103
-105 <= B <= 105


Input Format
First argument is an integer array A of size N.

Second argument is an integer B.



Output Format
Return 1 if any such pair exists else return 0.



Example Input
Input 1:

 A = [5, 10, 3, 2, 50, 80]
 B = 78
Input 2:

 A = [-10, 20]
 B = 30


Example Output
Output 1:

 1
Output 2:

 1
*/
int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    sort(A.begin(), A.end());
    
    int start = 0, end = 1;
    while (start < n && end < n) 
    {
        if (start != end && A[end] - A[start] == B)
         {
            return 1;
        }
         else if (A[end] - A[start] < B)
         {
            end++;
        }
         else 
         {
            start++;
        }
    }
    return 0;
}
