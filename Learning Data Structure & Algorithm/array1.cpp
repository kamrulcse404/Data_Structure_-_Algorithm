#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        maximum = max(maximum, arr[i]);
        cout<<maximum<<" ";
    }

    cout<<endl;
    
    return 0;
}