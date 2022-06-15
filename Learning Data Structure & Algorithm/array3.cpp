#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int pd = arr[1] - arr[0];
    int ans = 2;
    int mx = INT_MIN;

    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i-1] == pd)
        {
            ans++;
            mx = max(mx, ans);
        }
        else
        {
           pd = arr[i] - arr[i-1];
           ans = 2;
        }
        
    }
    
    cout<<mx<<endl;
    
    return 0;
}