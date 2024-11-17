#include<iostream>
using namespace std;

void bubbleSort(int a[] , int size)
{
    bool flag = 0;
    for( int i = 0; i < size-1; i++)
    {

        for(int j = 0; j < size-i-1; j++)
        {
            if(a[j] > a[ j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
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

    bubbleSort(arr , size);
    return 0;
}