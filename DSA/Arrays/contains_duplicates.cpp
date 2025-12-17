#include<iostream>
using namespace std ; 

bool return_duplicates(int arr[], int n){
    for ( int i=0; i<n; i++ ){
        for ( int j=i+1; j<n; j++ ){
            if (arr[i]==arr[j]){
                return true ;
            }
        }
    }
    return false ;
}

int main()
{
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr)/sizeof(int);

    cout << "the answer is : " << return_duplicates(arr,n);

    return 0 ; 
}