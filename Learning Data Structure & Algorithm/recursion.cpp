#include<bits/stdc++.h>
using namespace std;

int sum(int n);

int main(){

    int n;
    cin>>n;
    cout<<sum(n)<<endl;

    return 0;
}

int sum(int n){

    if (n == 0)
    {
        return 0;
    } 

    return n + sum(n - 1);
}