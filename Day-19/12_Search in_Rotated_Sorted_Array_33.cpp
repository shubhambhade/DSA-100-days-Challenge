/*35. Search in Rotated Sorted Array
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1

*/
class Solution {
public:
    int search(vector<int>& arr, int target) {

        int length = arr.size();

        int start = 0, end = length - 1, mid ;

        while(start <= end)
        {
            // find mid
            mid = start + (end - start)/2;

            if(arr[mid] == target)
            {
                return mid;
            }
            // left sorted array
            else if(arr[mid] >= arr[0])
            {
                if(arr[start] <= target && arr[mid] > target )
                {
                    end = mid -1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            //right sorted array
            else
            {
                if(arr[mid] < target && arr[end] >= target )
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid -1;
                }

            }
        }
        return -1;
    }
};