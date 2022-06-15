#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key);

int main(){

    int n;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int key;
    cin>>key;
    
    if (linearSearch(array, n, key) == -1)
    {
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"Index is "<<linearSearch(array, n, key)<<"; "<<"Value is "<< array[linearSearch(array, n, key)]<<endl;
    }
    
    return 0;
}

int linearSearch(int arr[], int size, int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}