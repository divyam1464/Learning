#include<iostream>
using namespace std ; 

// 1
// 01
// 101
// 0101
// 10101

int main()
{
    int n = 5 ;
    // bool num_1 = 1 ;
    // bool num_0 = 0 ;
    // for ( int i = 1 ; i <= n ; i++ ){
    //     for ( int j = 1 ; j <= i ; j++ ){
    //         if ( i%2 != 0 ){
    //             if ( j%2 != 0 ){
    //                 cout << num_1 ;
    //             }
    //             else{
    //                 cout << num_0 ;
    //             }
    //         }
    //         else{
    //             if ( j%2 != 0 ){
    //                 cout << num_0 ;
    //             }
    //             else{
    //                 cout << num_1 ;
    //             }
    //         }
    //     }
    //     cout << "\n" ;
    // }

    // OR 
    bool val = true;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << val << " ";
            val = !val;
        }
    cout << "\n";
    }

    return 0 ; 
}