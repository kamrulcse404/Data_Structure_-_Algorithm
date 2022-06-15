#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int currentSum = arr[0];
    int start = 0;

    for (int i = 1; i < n; i++)
    {
        while (currentSum > sum && start < i)
        {
            currentSum -= arr[start];
            start++;
        }

        if(currentSum == sum){
            cout<<start<<" "<<i-1<<endl;
           return 1;
        }

        if (i < n)
        {
            currentSum += arr[i];
        }
        
        
    }
    cout<<"No Result"<<endl;
    return 0;
}