#include<iostream>
using namespace std;

int octalToDecimal(int mun);

int main(){

    int num;
    cin>>num;

    cout<<octalToDecimal(num)<<endl;
    return 0;
}

int octalToDecimal(int num){
    int decimal = 0;
    int base = 1;

    while (num > 0)
    {
        int rem = num % 10;
        decimal = decimal + rem * base;
        num /= 10;
        base = base * 8;
    }
    return decimal;
}