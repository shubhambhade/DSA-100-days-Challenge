/*
You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

Examples:

Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113, which is selected as the output.
Input: arr[] = [15, 17, 20], k = 5
Output: -1
Explanation: Allocation can not be done.
Input: arr[] = [22, 23, 67], k = 1
Output: 112
*/

class Solution {
  public:
  
  bool isPossible(vector<int> &arr, int n, int k , int mid)
  {
      
      int studentCount = 1;
      int pageSum = 0;
      
      for(int i=0; i<n; i++)
      {
          if(pageSum + arr[i] <= mid)
          {
              pageSum += arr[i];
          }
          else
          {
              studentCount ++;
              if(studentCount > k || arr[i]> mid)
              {
                  return false;
              }
              pageSum  = arr[i];
          }
      }
      return true;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        
        int n = arr.size(); // no of books
        if (k > n) return -1; // More students than books
        int start = 0;
        int sum = 0;
        
        for(int i = 0; i < n; i++ )
        {
            sum += arr[i];
        }
        
        int end = sum;
        int ans = -1;
        
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            
            if(isPossible(arr,n,k,mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            
        }
        
        return ans;
    }
};

