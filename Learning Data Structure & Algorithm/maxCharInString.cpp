#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    string str = "kamrul Hasan, I want to die";

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    int maxChar = 0;
    char ch;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxChar)
        {
            maxChar = freq[i];
            ch = i + 'a';
        }
        
    }

    cout<<maxChar<<", "<<ch<<endl;
    
    
    
    return 0;
}