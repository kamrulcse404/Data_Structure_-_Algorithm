#include<iostream>
using namespace std;

void bublleSort(int arr[], int size);
void printSortedArray(int arr[], int size);

int main(){

    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    bublleSort(array, n);
    printSortedArray(array, n);

    return 0;
}

void bublleSort(int arr[], int size){

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}

void printSortedArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}