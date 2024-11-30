#include<iostream>
using namespace std;

void reverse_Each_Row_Of_Matrix(int arr[][100] , int row , int col)
{
    for(int i = 0; i < row; i++)
    {
        int start = 0, end = col-1;

        while(start < end)
        {
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

    // print reverse array
    cout<<"Reverse Array : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
}
void input(int arr[][100] , int row , int col)
{
    cout<<"Enter "<<row*col<<" element in array : "<<endl;
    for(int i =0; i< row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
}
void printArray(int arr[][100], int row , int col)
{
    cout<<"\n Array : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row , col;
    cout<<"Enter row count :"<<endl;
    cin>>row;
    cout<<"Enter col count : "<<endl;
    cin>>col;

    int a[100][100];
    input(a , row ,col);
    printArray(a , row, col);
    reverse_Each_Row_Of_Matrix(a , row, col);
return 0;
}