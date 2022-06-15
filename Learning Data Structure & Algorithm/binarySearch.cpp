#include<iostream>
using namespace std;

int binarySearch(int array[], int size, int key);

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

    if (binarySearch(array, n, key) == -1)
    {
        cout<<"Value not found"<<endl;
    }
    else{
        cout<<"Value is "<<array[binarySearch(array, n, key)]<<"; Index is "<<binarySearch(array, n, key)<<endl;
    }
    

    return 0;
}

int binarySearch(int array[], int size, int key){

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end)/2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
    }
    return -1;
}