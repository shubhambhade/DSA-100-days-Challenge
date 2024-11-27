#include<iostream>
using namespace std;

void addition(int a[][100],int b[][100], int row, int col)
{
    int add[100][100];
    cout<<"\nAddition Array : ";
    for(int i = 0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            cout<<add[i][j]<<" ";
        }
    }
}
void printArray(int a[][100],int b[][100], int row, int col)
{
    cout<<"Array1 : ";
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Array1 : ";
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<b[i][j]<<" ";
        }
    }
}
void input(int a[][100] ,int b[][100], int row , int col)
{
    cout<<"Enter "<<row*col<<" element in first array : "<<endl;
    for(int i = 0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter "<<row*col<<" element in second array : "<<endl;
    for(int i = 0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            cin>>b[i][j];
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

    int arr[100][100];
    int arr1[100][100];
    input(arr,arr1,row_count,col_count);
    printArray(arr,arr1,row_count,col_count);
    addition(arr,arr1,row_count,col_count);
    return 0;
}