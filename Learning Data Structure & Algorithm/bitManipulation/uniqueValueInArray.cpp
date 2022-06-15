#include<bits/stdc++.h>
using namespace std;

int unique(int arr[], int n);

int main()
{
    int arr[] = {3, 2, 7, 2, 3};
    int res = unique(arr, 5);
    cout<<res<<endl;
    return 0;
}

int unique(int arr[], int n){

    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}