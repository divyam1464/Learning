#include<iostream>
using namespace std ; 

void print(int arr[], int n){
    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << "\n" ;
}

void selectionSort(int arr[], int n){
    for ( int i = 0 ; i < n-1 ; i++ ){
        int minIndex = i ;
        // loop to find minimum
        for ( int j = i+1 ; j < n ; j++ ){
            if (arr[j] > arr[minIndex]){
                minIndex = j ;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    print(arr,n);
}

int main()
{
    int arr[] = {5,4,1,3,2};
    selectionSort(arr,5);
    return 0 ; 
}