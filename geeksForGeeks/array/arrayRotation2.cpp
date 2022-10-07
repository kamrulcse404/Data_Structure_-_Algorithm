#include<bits/stdc++.h>
using namespace std;

void rotation(int arr[], int d, int n){
    int p = 1;
    while (p <= d)
    {
        int tmp = arr[0];
        for (int i = 0; i < n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = tmp;
        p++;
    }
    
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n, d;
    cin>>n>>d;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    rotation(arr, d, n);   
    print(arr, n); 

    return 0;
}