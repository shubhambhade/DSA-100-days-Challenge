#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while(start <= end)
    {
        //find mid
        mid = (start + end)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
void printArray(int a[], int size)
{
    cout<<"Array : "<<endl;
    for(int i = 0; i < size; i++)
    {
    cout<<a[i]<<" ";

    }
}
void input(int a[] , int size)
{
    cout<<"Enter the element : "<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}
int main()
{
    int arr[1000];
    int size;
    cout<<"Enter number of element in array : "<<endl;
    cin>>size;
    input(arr,size);
    printArray(arr,size);
    int search_key;
    cout<<"\nEnter the search key element : "<<endl;
    cin>>search_key;

    int result = binarySearch(arr , size , search_key);

    cout<<search_key <<" element present at index position "<<result;

return 0;
}