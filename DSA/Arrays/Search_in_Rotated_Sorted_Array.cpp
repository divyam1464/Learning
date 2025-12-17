#include<iostream>
using namespace std ; 

int findTarget(int arr[], int n , int target){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + ((end-start)/2);
        if ( arr[mid] == target ){
            return mid ;
        }    
        if( arr[start]  <= arr[mid] ){ //left sorted
            if (arr[start]<=target && target<arr[mid]){
                end = mid-1 ;
            }
            else{
                start=mid+1;
            }
        }
        else{ //Right sorted 
            if(arr[mid]<target && target<=arr[end]){ 
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1 ;
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    int target = 0 ;

    cout << "The target is at : " << findTarget(arr,n,target);

    return 0 ; 
}