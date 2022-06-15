#include<iostream>
using namespace std;

int factorial(int num);

int main(){

    int num;
    cin>>num;

    int res = factorial(num);
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