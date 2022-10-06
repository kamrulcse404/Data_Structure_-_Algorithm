#include<bits/stdc++.h>
using namespace std;

void rotation(int arr[], int d, int n){
    int tmp[n], k=0;

    for (int i = d; i < n; i++)
    {
        tmp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < d; i++)
    {
        tmp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = tmp[i];
    }    
    
}

void printArry(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
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
    printArry(arr, n);
    return 0;
}