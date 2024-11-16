#include<iostream>
using namespace std;

void selection_sort(int a[] , int size)
{
    for( int i = 0; i < size; i++)
    {
        int min = i;

        for(int j = i + 1; j < size; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        
        if( min != i)
        {
            swap(a[i],a[min]);
        }
    }

    // print 
    cout<<"sorted array :  "<<endl;
    for( int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
}
void input(int a[] , int size)
{
    cout<<"Enter element in array : "<<endl;
    for(int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}

void original_array(int a[] , int size)
{
    cout<<"\nOriginal array : "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter size of array : "<<endl;
    cin>>size;

    int arr[size];
    input(arr,size);
    original_array(arr,size);
    selection_sort(arr,size);
    return 0;
}