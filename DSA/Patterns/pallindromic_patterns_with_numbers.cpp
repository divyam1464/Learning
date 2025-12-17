#include<iostream>
using namespace std ; 

//     1
//    212
//   32123
//  4321234
// 543212345

int main()
{
    int n = 5 ;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = n-i ; j > 0 ; j-- ){
            cout << " " ;
        }
        for ( int j = i ; j > 0 ; j-- ){
            cout << j ;
        }
        if ( i >= 2 ){
            for ( int j = 2 ; j <= i ; j++ ){
                cout << j ;
            }
        }
        cout << "\n" ;
    }
    return 0 ; 
}