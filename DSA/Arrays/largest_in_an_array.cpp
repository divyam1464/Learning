#include<iostream>
using namespace std ; 

int main()
{
    int arr[10] = {2,4,3,2,4,53,6,3,3,88};
    int max = arr[0] ;
    int min = arr[0] ;

    // cout << sizeof(arr)/sizeof(int) << "\n" ;

    int n = sizeof(arr)/sizeof(int) ;
    for ( int i = 0 ; i < n ; i++ ){
        if ( arr[i] > max ){
            max = arr[i] ;
        }
    }
    for ( int i = 0 ; i < n ; i++ ){
        if ( arr[i] < min ){
            min = arr[i] ;
        }
    }

    cout << max << "\n";
    cout << min;
    return 0 ; 
}