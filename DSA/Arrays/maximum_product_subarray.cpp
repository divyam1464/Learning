#include<iostream>
#include<climits>
using namespace std ; 

int maxProduct(int arr[], int n){
    int pre = 1 , suff = 1 , ans = INT_MIN ;
    for ( int i = 0 ; i < n ; i++ ){
        if ( pre == 0 ){
            pre = 1 ;
        }
        if ( suff == 0 ){
            suff = 1 ;
        }
        pre *= arr[i];
        suff *= arr[n-i-1];
        ans = max(ans,max(pre,suff));
    }
    return ans;
}

int main()
{
    int arr[]={2,3,-2,4};
    int n = sizeof(arr)/sizeof(int);
    cout << "Maximum Product of subarray is : " << maxProduct(arr,n) << "\n" ;
    return 0 ; 
}