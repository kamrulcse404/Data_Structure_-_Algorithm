#include<iostream>
using namespace std;

int main(){
    float res = 0.0;

    for (int i = 1; i <= 49; i++)
    {
        res += i;
    }
    
    cout<< res/49.0<<endl;
    return 0;
}