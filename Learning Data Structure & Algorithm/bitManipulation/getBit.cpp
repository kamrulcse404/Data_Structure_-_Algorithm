#include<bits/stdc++.h>
using namespace std;
int getBit(int n, int pos);

int main(){

    int res = getBit(8, 3);

    cout<<res<<endl;

    return 0;
}

int getBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}
