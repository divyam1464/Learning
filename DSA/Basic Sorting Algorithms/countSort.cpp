#include<iostream>
#include<climits>
using namespace std ; 

void print(int arr[], int n){
    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << "\n" ;
}

void countSort(int arr[], int n){
    int freq[100000]; //range
    int minVal = INT_MAX, maxVal = INT_MIN ; //initialized min and max 

    // 1st Step to initialize the frequencies into out frequency array and also to find out the min and max value 
    for ( int i = 0 ; i < n ; i++ ){
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd Step
    for(int i = minVal, j=0 ; i <= maxVal ; i++ ){
        while(freq[i] > 0 ){
            arr[j++] = i ;
            freq[i]--;
        }
    }
    print(arr,n);
}

int main()
{
    int arr[8] = {1,4,1,3,2,4,3,7};
    countSort(arr,8);
    return 0 ; 
}