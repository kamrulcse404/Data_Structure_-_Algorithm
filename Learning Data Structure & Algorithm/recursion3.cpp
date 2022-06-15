#include<bits/stdc++.h>
using namespace std;

void inc(int n);

int main(){
    inc(4);
    cout<<endl;
    return 0;
}

void inc(int n){
    if (n == 0)
    {
        return;
    }
    inc(n -1);   
     cout<<n<<" "; 
}