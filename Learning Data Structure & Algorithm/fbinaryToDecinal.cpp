#include<iostream>
using namespace std;

int binaryToDecimal(int num);

int main(){

    int num;
    cin>>num;

    cout<<binaryToDecimal(num)<<endl;
    return 0;
}

int binaryToDecimal(int num){

    int decimal = 0;
    int weight = 1;

    while (num > 0)
    {
        int rem = num % 10;
        decimal = decimal + rem * weight;
        num /= 10;
        weight  = weight * 2;
    }
    return decimal;
}