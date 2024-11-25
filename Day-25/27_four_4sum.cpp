/*
Given an array A of N integers. You have to find whether a combination of four elements in the array whose sum is equal to a given value X exists or not.
 

Example 1:

Input:
N = 6
A[] = {1, 5, 1, 0, 6, 0}
X = 7
Output:
1

Explantion:
1, 5, 1, 0 are the four elements which makes sum 7.
*/

bool find4Numbers(int A[], int n, int X) {
    
    // array convert into vector
    vector<int> vec(A, A + n);
    // sort the array
    sort(vec.begin(), vec.end());

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int ans = X - (vec[i] + vec[j]);
            
            int start = j + 1, end = n - 1;

            while (start < end)
            {
                if (vec[start] + vec[end] == ans)
                {
                    return true;
                } 
                else if (vec[start] + vec[end] > ans)
                {
                    end--;
                } 
                else
                {
                    start++;
                }
            }
        }
    }
    return false;
}