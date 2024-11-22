/*Kadane's Algorithm

Given an integer array arr[]. You need to find and return the maximum sum possible from all the subarrays.

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray {-2} has the largest sum -2.
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25.
*/
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        
        int n = arr.size();
        
        int maxi = INT_MIN, prefix = 0;
        
        for(int i = 0; i < n; i++)
        {
            prefix += arr[i];
            
            maxi = max(maxi , prefix);
            
            if(prefix < 0)
            {
                prefix = 0;
            }
        }
        return maxi;
    }
};