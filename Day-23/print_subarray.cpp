#include<iostream>
using namespace std;

void printSubarray(int a[] ,int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            cout<<"{ ";
            for(int k = i; k <= j; k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<" }"<<endl;
        }
    }
}
void inputArray(int a[], int n)
{
    cout<<"Enter element in array : "<<endl;
    for(int i =0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
}
void printArray(int a[], int n)
{
    cout<<"Array : ";
    for(int i =0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cout<<"Enter size of array : "<<endl;
    cin>>size;
    int arr[1000];
    inputArray(arr , size);
    printArray(arr, size);
    printSubarray(arr, size);
return 0;
}
