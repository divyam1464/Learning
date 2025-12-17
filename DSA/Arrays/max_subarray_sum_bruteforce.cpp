#include<iostream>
#include<climits>
using namespace std ; 

void printSubArray(int *arr, int n){
    int maxSum = INT_MIN; 
    for (int start=0; start<n; start++ ){
        for (int end=start; end<n; end++){
            int currentSum = 0;
            for (int i=start; i<=end; i++){
                currentSum += arr[i];
            }
            cout << currentSum << ",";
            maxSum = max(maxSum,currentSum);
        }
        cout << "\n";
    }
    cout << "Final Maximum Subarray sum is : " << maxSum << "\n" ;
}

void printSubArray2(int *arr, int n){
    int maxSum = INT_MIN; 
    for (int start=0; start<n; start++ ){ //start = 2
        int currentSum = 0;
        for (int end=start; end<n; end++){ //end = 2,3,4,5
            currentSum += arr[end];
            maxSum = max(maxSum,currentSum);
        }
        // cout << "\n";
    }
    cout << "Final Maximum Subarray sum is : " << maxSum << "\n" ;
}

void printSubArray3(int *arr, int n){  //using kadane's algorithm
    int maxSum = INT_MIN; 
    int currentSum = INT_MIN; 
    for ( int i = 0 ; i<n ; i++ ){
        currentSum += arr[i];
        maxSum = max(maxSum,currentSum);
        if ( currentSum < 0 ){
            currentSum = 0 ;
        }
    }
    cout << "Final Maximum Subarray sum is : " << maxSum << "\n" ;
}

int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    printSubArray3(arr,n);
    return 0 ; 
}