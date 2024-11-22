#include<iostream>
#include<vector>
using namespace std;

// method1 - time complexity = O(n^2)
int divide_Array_into_Subarray_with_Equal_sum(vector<int>&arr , int n)
{
    for(int i = 0; i < n; i++)
    {
        int first_part_sum = 0, second_part_sum = 0;

        for(int j = 0; j <= i; j++ )
        {
            first_part_sum += arr[j];
        }

        for(int j = i + 1; j < n; j++)
        {
            second_part_sum += arr[j];
        }

        if(first_part_sum == second_part_sum)
        {
            return 1;
        }
    }
    return 0;
}

// method2 : time complexity= O(n) -- better solution

int divide_Array_into_Subarray_with_Equal_sum1(vector<int>&arr)
{
    // calculate total sum
    int total_sum = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        total_sum += arr[i];
    }
    int prefix = 0;

    for(int i = 0; i < arr.size(); i++ )
    {
        prefix += arr[i];

       int  ans = total_sum - prefix;
          if(ans == prefix)
          {
             return 1;
         }
    }

    return 0;
}

int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter element in array : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cout<<endl;
    cout<<"Array : ";
    for(int i =0 ; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"result : "<<divide_Array_into_Subarray_with_Equal_sum(v , n);
    cout<<"\nresult : "<<divide_Array_into_Subarray_with_Equal_sum1(v);
    return 0;
}