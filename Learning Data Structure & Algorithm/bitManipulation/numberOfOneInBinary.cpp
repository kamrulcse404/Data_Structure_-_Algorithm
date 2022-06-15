#include<bits/stdc++.h>
using namespace std;

int numberOfOneInBinary(int n);

int main()
{
    int res = numberOfOneInBinary(7);
    cout<<res<<endl;

    return 0;
}

int numberOfOneInBinary(int n){

    int count = 0;
    while (n)
    {
        n = n & n-1;
        count++;
    }
    return count;
}