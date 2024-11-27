#include<iostream>
using namespace std;

int search(int a[][100] , int row, int col, int search)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(a[i][j]== search)
            {
                int index = i * col + j;
                return index;
            }
        }
    }
    return -1;
}

void printArray(int a[][100], int row, int col)
{
    cout<<"Array : ";
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}

void input(int a[][100] , int row , int col)
{
    cout<<"Enter "<<row*col<<" in array : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j <col; j++)
        {
            cin>>a[i][j];
        }
    }
}
int main()
{
    int row_count, col_count;
    cout<<"Enter row count : "<<endl;
    cin>>row_count;
    cout<<"Enter col count : "<<endl;
    cin>>col_count;
    int search_element;
    cout<<"Enter search element :"<<endl;
    cin>>search_element;

    // create 2d array
    int arr[100][100];
    input(arr , row_count, col_count);
    printArray(arr , row_count, col_count);
    int result = search(arr, row_count , col_count,search_element);
    if(result >= 0)
    {
    cout<<search_element<<"\n Element present at index position "<<result;

    }
    else{
        cout<<"\nElement is not present "<<result<<endl;
    }
    return 0;
}