#include<bits/stdc++.h>
using namespace std;

void primeSieve(int n);

int main(){

    int n;
    cin>>n;

    primeSieve(n);

    return 0;
}

void primeSieve(int n){

    bool prime[n];
    int count = 0;

    for (int i = 0; i <= n; i++)
    {
        prime[i] = false;
    }
    

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                prime[j] = true;
            }
            
        }
        
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == false)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    
}