#include<bits/stdc++.h>
using namespace std;

int inclusiveExclusive(int n1, int n2, int n3);

int main(){

    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    cout<<inclusiveExclusive(n1, n2, n3)<<endl;

    return 0;
}

int inclusiveExclusive(int n1, int n2, int n3)
{
    int x = n1 / n2;
    int y = n1 / n3;
    int z = n1 / (n2 * n3);
    return (x + y - z);
}