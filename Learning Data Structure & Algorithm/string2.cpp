#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    string s = "765";

    int x = stoi(s);

    cout<<x<<endl;

    string str = "283278687239";

    // increasing order sort
    sort(str.begin(), str.end());

    cout<<str<<endl;

    // decreasing order sort

    sort(str.begin(), str.end(), greater<int>());

    cout<<str<<endl;

    return 0;
}