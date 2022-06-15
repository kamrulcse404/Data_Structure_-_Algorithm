#include<bits/stdc++.h>
using namespace std;

void dec(int n);

int main(){
    dec(4);
    cout<<endl;
    return 0;
}

void dec(int n){
    if (n == 0)
    {
        return;
    }
    cout<<n<<" ";
    dec(n -1);    
}