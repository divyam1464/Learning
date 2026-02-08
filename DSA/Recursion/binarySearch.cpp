#include<iostream>
#include<vector>
using namespace std ; 

int binarySearch(vector<int> arr, int s, int e, int key){
    if ( s > e ) return 0 ;
    else{
        int mid = s + ( e - s ) / 2 ; 
        if ( key == arr[mid] ){
            return mid ;
        }
        else if( key < arr[mid] ){
            return binarySearch(arr,s,mid-1,key);
        }
        else{
            return binarySearch(arr,mid+1,e,key);
        }
    }

}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int key = 6 ;
    int low = 0 ; 
    int high = arr.size() - 1 ;
    cout << binarySearch(arr,low,high,key);
    
    return 0 ; 
}