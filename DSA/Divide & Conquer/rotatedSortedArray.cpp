#include<iostream>
using namespace std ; 

int search(int arr[], int si, int ei, int target){

    if ( si > ei ){
        return -1 ;
    }

    int mid = si + ( ei - si ) / 2 ;
    if ( arr[mid] == target ){
        return mid ;
    }
    // Line - 1 
    if ( arr[si] <= arr[mid] ){
        if ( arr[si] <= target && target <= arr[mid] ){
            // left half call
            return search(arr,si,mid-1,target);
        }
        else{
            // right half call
            return search(arr,mid+1,ei,target);
        }
    }
    // Line - 2 
    else{
        if ( arr[mid] <= target && target <= arr[ei] ){
            // right half 
            return search(arr,mid+1,ei,target);
        }
        else{
            // left half
            return search(arr,si,mid-1,target);
        }
    }


}

int main()
{
    int arr[] = {4,5,6,7,0,1,2} ;
    int n = 7 ;

    cout << "idx : " << search(arr,0,n-1,70) << endl ;

    return 0 ; 
}