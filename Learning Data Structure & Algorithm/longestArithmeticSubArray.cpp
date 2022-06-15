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
    int corrent = 2;
    int i = 2;

    for (int i = 2; i < n; i++)
    {
        if (pd == (arr[i] - arr[i-1]))
        {
            corrent++;
        }
        else
        {
            pd = arr[i] - arr[i-1];
            corrent = 2;
        }
        ans = max(ans, corrent);   
    }
     cout<<ans<<endl;
    
    return 0;
}