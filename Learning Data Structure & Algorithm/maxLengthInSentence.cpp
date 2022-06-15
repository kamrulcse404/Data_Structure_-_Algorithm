#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    // cin.ignore();

    // char arr[n+1];
    string arr;

    // cin.getline(arr, n);

    getline(cin, arr);


    int currLength =0, maxLength = 0, i = 0;
    int len;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
           if (currLength > maxLength)
           {
               maxLength = currLength;
               len = i;
           }
           currLength = 0;
        }
        else
        {
            currLength++;
        }



        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }

    cout<<maxLength<<endl;

    int sl = len - maxLength;

    for (int j = sl; j < len; j++)
    {
        cout<<arr[j];
    }
    cout<<endl;

    return 0;
}