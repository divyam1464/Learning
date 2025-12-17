#include<iostream>
using namespace std ; 

//  *   |   *
//  **  |  **
//  *** | ***
//  ****|****
//  ---------------
//  ****|****
//  *** | ***
//  **  |  **
//  *   |   *

int main()
{
    int n = 10 ;
    // first upper half block
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= i ; j++ ){
            cout << "*" ;
        }
        for ( int j = 1 ; j <= (n-i)*2 ; j++ ){
            cout << " ";
        }
        for ( int k = 1 ; k <= i ; k++ ){
            cout << "*" ;
        }
        cout << "\n" ;
    }

    // second lower half block
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n-i+1 ; j++ ){
            cout << "*" ;
        }
        for ( int j = 2*(i-1) ; j >= 1 ; j-- ){
            cout << " " ;
        }
        for ( int j = 1 ; j <= (n-i+1) ; j++ ){
            cout << "*" ;
        }
        cout << "\n" ;
    }
    return 0 ; 
}