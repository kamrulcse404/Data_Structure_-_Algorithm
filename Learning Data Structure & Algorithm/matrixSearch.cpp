#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m, key;
    cin>>n>>m>>key;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    int row = 0, col = m-1;
    bool found = false;


    while (row < n && col >= 0)
    {
        /* code */
        if (arr[row][col] == key)
        {
            /* code */
            found = true;
            cout<<"Index "<<row<<", "<<col<<endl;
            break;
        }
        else if (key > arr[row][col])
        {
            row++;
        }
        else{
            col--;
        }    
        
    }
    if (found)
    {
        cout<<"Element exist"<<endl;
    }
    else{
        cout<<"Element does not exist"<<endl;
    }
    
    
    return 0;
}