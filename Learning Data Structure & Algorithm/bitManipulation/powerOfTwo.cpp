#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n);

int main(){

    bool res = isPowerOfTwo(64);
    cout<<res<<endl;

    return 0;
}

bool isPowerOfTwo(int n)
{
    return (n && !(n & n-1));
}