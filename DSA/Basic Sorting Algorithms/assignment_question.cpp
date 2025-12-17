#include<iostream>
#include<climits>
using namespace std ; 

void print(int arr[], int n){
    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << "\n" ;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap) {
            cout << "Bubble sort is : ";
            print(arr, n);
            return;
        }
    }
    cout << "Bubble sort is : ";
    print(arr, n);
}


void selectionSort(int arr[], int n){
    for ( int i = 0 ; i < n-1 ; i++ ){
        int minIndex = i ;
        for ( int j = i+1 ; j < n ; j++ ){
            if ( arr[j] > arr[minIndex] ){
                minIndex = j ;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout << "Selection Sort is : " ;
    print(arr,n);
}

void insertionSort(int arr[], int n){
    for ( int i = 1 ; i < n ; i++ ){
        int current = arr[i] ;
        int prev = i-1 ;
        while ( prev >= 0 && arr[prev] < current ){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = current ;
    }
    cout << "Insertion Sort is : " ;
    print(arr,n);
}

void countingSort(int arr[], int n){
    int freq[100000] = {0} ;
    int minVal = INT_MAX , maxVal = INT_MIN ;
    for ( int i = 0 ; i < n ; i++ ){
        freq[arr[i]]++;
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }
    for ( int i = minVal, j = 0 ; i <= maxVal ; i++ ){
        while(freq[i] > 0){
            arr[j++] = i ;
            freq[i]-- ;
        }
    }
    cout << "Counting Sort is : " ;
    print(arr,n);
}

int main()
{
    int arr1[] = {3,6,2,1,8,7,4,5,3,1};
    int arr2[] = {3,6,2,1,8,7,4,5,3,1};
    int arr3[] = {3,6,2,1,8,7,4,5,3,1,0};
    int arr4[] = {3,6,2,1,8,7,4,5,3,1,0,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int n4 = sizeof(arr4)/sizeof(arr4[0]);
    selectionSort(arr1,n1);
    insertionSort(arr2,n2);
    bubbleSort(arr3,n3);
    countingSort(arr4,n4);
    return 0 ; 
}