#include<bits/stdc++.h>
using namespace std;

int main(){

    int m, n;
    cin>>m>>n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    int rowStart = 0, rowEnd = m-1, colStart = 0, colEnd = n-1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int col = colStart; col <= colEnd; col++)
        {
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;

        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout<<arr[row][colEnd]<<" ";
        }
        colEnd--;

        for (int col = colEnd; col >= colStart; col--)
        {
            cout<<arr[rowEnd][col]<<" ";
        }
        rowEnd--;

        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout<<arr[row][colStart]<<" ";
        }
        colStart++;
        
    }
    
    

    return 0;
}