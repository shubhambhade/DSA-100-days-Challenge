#include<iostream>
using namespace std;

void printSumOfDiagonalElement(int arr[][100] , int row , int col)
{
    int sum_of_first_diagonal = 0;
    int sum_of_second_diagonal = 0;

    for(int i = 0 ; i < row; i++)
    {
        sum_of_first_diagonal += arr[i][i];
    }
    cout<<"first diagonal element sum : "<<sum_of_first_diagonal<<endl;

    int i = 0;
    int j = col - 1;

    while(j >= 0)
    {
        sum_of_second_diagonal += arr[i][j];
        i++;
        j--;
    }
    cout<<"second diagonal element sum : "<<sum_of_second_diagonal<<endl;
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
    printSumOfDiagonalElement(a , row, col);
    return 0;
}