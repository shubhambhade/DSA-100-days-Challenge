#include<iostream>
#include<vector>
using namespace std;

void prefixSum(int a[] , int n)
{
    vector<int> prefix(n);

    prefix[0] = a[0];

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + a[i];
    }

    //print prefix array
    cout<<"Prefix Array : ";
    for(int i : prefix)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
void suffixSum(int a[] , int n)
{
    vector<int> suffix(n);

    suffix[n-1] = a[n-1];

    for(int i = n - 2; i >= 0; i--)
    {
        suffix[i] = a[i] + suffix[i + 1];
    }
    //print suffix array
    cout<<"Suffix Array : ";
    for(int i : suffix)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
void input(int a[] , int n )
{
    cout<<"Enter element in array : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void printArray(int a[], int n)
{
    cout<<"Array : ";
     for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    int arr[1000];
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    input(arr , n);
    printArray(arr,n);
    prefixSum(arr,n);
    suffixSum(arr,n);
return 0;
}