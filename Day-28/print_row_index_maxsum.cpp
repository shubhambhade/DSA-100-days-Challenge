#include<iostream>
#include <climits> 
using namespace std;

int printRowMaxSum(int arr[][100], int row, int col)
{
    int sum = INT_MIN;
    int row_index = -1;

    for(int i = 0; i < row; i++)
    {
        int total = 0;

        for(int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }

        if(sum < total)
        {
            sum = total;
            row_index = i;
        }
    }
    return row_index;
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
    cout<<"\n Array : ";
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
    int result = printRowMaxSum(a , row , col);
    cout<<"row index : "<<result;
    return 0;
}