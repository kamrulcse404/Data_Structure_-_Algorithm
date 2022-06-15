#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int pos);


int main(){

    int res = setBit(11, 2);

    cout<<res<<endl;
    return 0;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}