#include<iostream>
#include<vector>
using namespace std ; 

int lo(vector<int> arr, int target , int i){
    if ( i == arr.size()){
        return - 1;
    }
    int idxFound = lo(arr,target,i+1);
    if ( idxFound == -1 && arr[i] == target){
        return i ;
    }
    return idxFound ;
}

int main()
{
    vector<int> arr = {1,2,3,3,3,4,5};
    cout << lo(arr,3,0) << endl ;
    return 0 ; 
}