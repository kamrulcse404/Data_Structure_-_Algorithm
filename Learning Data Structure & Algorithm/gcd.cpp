#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b);

int main(){

    int a, b;
    cin>>a>>b;

    int res = gcd(a, b);
    cout<<res<<endl;

    return 0;
}

int gcd(int a, int b){

    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;    
}