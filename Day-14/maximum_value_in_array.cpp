#include<iostream>
using namespace std;

int maximum_Value_In_Array(int a[], int size)
{
    int ans = a[0];
    for(int i = 1; i < size; i++)
    {
        if(a[i] > ans)
        {
            ans = a[i];
        }
    }
    return ans;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = maximum_Value_In_Array(arr, size);
    cout << "Maximum value in array: " << result;
    return 0;
}
