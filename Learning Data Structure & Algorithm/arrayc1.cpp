#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        maxi = max(maxi, arr[i]);
        cout<<maxi<<" ";
        
    }
    cout<<endl;
    return 0;
}