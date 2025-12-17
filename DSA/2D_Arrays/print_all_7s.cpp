#include<iostream>
using namespace std ; 

int print(int mat[][3], int n , int m ){

    int count = 0 ;

    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < m ; j++ ){
            if ( mat[i][j] == 7 ){
                cout << mat[i][j] << endl ; 
                count++ ;
            }
        }
    }
    cout << count << endl ;
    return count ;
}

int main()
{
    int arr[2][3]={{4,7,8},
                   {8,8,7}};

    print(arr,2,3) ;

    return 0 ; 
}   