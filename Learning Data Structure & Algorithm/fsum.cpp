#include<iostream>
using namespace std;

int fact(int n);

int main(){

    int n;
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
}

int fact(int n){

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}