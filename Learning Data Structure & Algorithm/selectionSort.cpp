#include<iostream>
using namespace std;

void selectionSort(int arr[], int size);
void printSortedArray(int arr[], int size);

int main(){

    int n;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    selectionSort(array, n);
    printSortedArray(array, n);

    return 0;
}

void selectionSort(int arr[], int size){

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
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