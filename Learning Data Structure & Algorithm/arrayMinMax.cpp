#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        minNum = min(minNum, array[i]);
        maxNum = max(maxNum, array[i]);
    }
    
    cout<<minNum<<endl;
    cout<<maxNum<<endl;

    return 0;
}