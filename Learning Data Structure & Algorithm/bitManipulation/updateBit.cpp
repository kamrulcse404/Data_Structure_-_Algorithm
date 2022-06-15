#include<bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos);
int setBit(int n, int pos, int value);

int main(){

    int n = 11, pos = 2, value = 1;
    n = clearBit(n, pos);
    int res = setBit(n, pos, value);

    cout<<res<<endl;

    return 0;
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask); 
}

int setBit(int n, int pos, int value){
    return (n | (value << pos));
}