#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int revNum = 0;

    while (n != 0)
    {
        int rem = n % 10;
        revNum = revNum * 10 + rem;
        n/=10;
    }

    cout<<revNum<<endl;
    
    return 0;
}