#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    bool res = isSorted(arr, 6);
    if (res)
    {
        cout<<"Sorted Array"<<endl;
    }else{
        cout<<"Not Sorted Array"<<endl;
    }
    
    return 0;
}

bool isSorted(int arr[], int n){
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }

    // bool restArray = isSorted(arr + 1, n - 1);
    // return restArray;  
    return isSorted(arr + 1, n - 1);
}