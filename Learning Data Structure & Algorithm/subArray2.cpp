#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
        }
        if (sum>maxi)
        {
            maxi = sum;
        }
        sum = 0;                
    }

    cout<<maxi<<endl;
    return 0;
}