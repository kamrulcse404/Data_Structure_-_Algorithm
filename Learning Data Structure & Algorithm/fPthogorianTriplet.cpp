#include<iostream>
#include<cmath>

using namespace std;

bool pythogorianTriplet(int num1, int num2, int num3);

int main(){

    int num1, num2, num3;
    cin>>num1>>num2>>num3;
    bool res = pythogorianTriplet(num1, num2, num3);

    if (res)
    {
        cout<<"Pythogoreab Triplet"<<endl;
    }
    else{
        cout<<"Not Pythogoreab Triplet"<<endl;
    }
    
    return 0;
}

bool pythogorianTriplet(int num1, int num2, int num3){
    int a = max(num1, max(num2, num3));

    if (a == num1)
    {
        if (num1 * num1 == (num2 * num2 + num3 * num3))
        {
            return true;
        }
        
    }
    else if (a == num2)
    {
        if (num2 * num2 == (num1 * num1 + num3 * num3))
        {
            return true;
        }
    }
    else if (a == num3)
    {
        if (num3 * num3 == (num1 * num1 + num2 * num2))
        {
            return true;
        }
    }
    
    return false;
}