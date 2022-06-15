#include<bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos);

int main(){

    int res = clearBit(7, 2);
    cout<<res<<endl;
    return 0;
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}