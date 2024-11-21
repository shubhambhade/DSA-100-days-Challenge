/*
Given an array, arr[] of distinct elements, and a number x, find if there is a pair in arr[] with a product equal to x. Return true if there exists such pair otherwise false.

Examples:

Input: arr[] = [10, 20, 9, 40], x = 400
Output: true
Explanation: As 10 * 40 = 400, the answer is true.
Input: arr[] = [-10, 20, 9, -40], x = 30
Output: false
Explanation: No pair exists with product 30.
Expected Time Complexity: O(n)
Expected Space Complexity: O(n)
*/
class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int start = 0;
        int end = n-1;
    
        while(start < end)
        {
            if(static_cast<long long>(arr[start])*arr[end] == x)
            {
                return 1;
            }
            else if(static_cast<long long>(arr[start])*arr[end] < x)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return 0;
    }
};