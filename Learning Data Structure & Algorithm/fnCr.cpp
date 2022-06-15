#include<iostream>
using namespace std;

int factorial(int num);

int main(){

    int n, r;
    cin>>n>>r;

    int res = factorial(n)/(factorial(n-r) * factorial(r));
    cout<<res<<endl;
    return 0;
}

int factorial(int num){

    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}