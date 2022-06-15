#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    char arr[n+1];

    cin>>arr;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
        
    }

    if (check == true)
    {
        /* code */
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    
    

    return 0;
}