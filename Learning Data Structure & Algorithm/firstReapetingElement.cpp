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

    set<int> st;

    int min = -1;

    for (int i = n-1; i >= 0 ; i--)
    {
        if (st.find(arr[i]) != st.end())
        {
            min = i;
        }
        else
        {
            st.insert(arr[i]);
        } 
    }
    if (min != -1)
    {
        cout<<"The first reapeting element is : "<<arr[min];
    }
    else{
        cout<<"There are no reapeting element"<<endl;
    }
    
    return 0;
}