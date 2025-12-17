#include<iostream>
using namespace std ; 

void matrix(int mat[], int size , int n , int m ){
    int arr[n][m] ;
    if ( n*m == size ){
        cout << "Possible\n" ;
        for ( int i = 0 ; i < size ; i++ ){
            for ( int j = 0 ; j < m ; j++ ){
                cout << mat[i] << " " ;
            }
            cout << endl ;
        }
    }
    else{
        cout << "[]\n" ;
    }
}

int main()
{
    int arr[] = {1,2,3,4} ;
    int size = sizeof(arr)/sizeof(int) ;
    cout << size << endl ;

    matrix(arr,size,2,2) ;
    
    return 0 ; 
}