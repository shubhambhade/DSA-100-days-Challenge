#include<iostream>
using namespace std;

void insertionSort(int a[], int size)
{
    for(int i = 1; i < size; i++)
    {
       for(int j = i; j > 0; j--)
       {
        if(a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
        }
        else
        {
            break;
        }
       }
    }

    // print
    cout<<"\nSorted array : "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }

}
void input(int a[], int size)
{
    cout<<"Enter element in array : "<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}
void printOriginalArray(int a[], int size)
{
    cout<<"Input Array : "<<endl;
    for(int i = 0; i < size; i++ )
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter Size of Array : "<<endl;
    cin>>size;

    int arr[size];
    input(arr , size);
    printOriginalArray(arr , size);
    insertionSort(arr , size);
    return 0;
}