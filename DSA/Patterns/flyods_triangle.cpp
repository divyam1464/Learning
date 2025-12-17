#include<iostream>
using namespace std ; 

int main()
{
    int n ;
    cout << "Enter the value of n(basically row) : " ;
    cin >> n ;

    int num ;
    cout << "Enter the value of num from where you want to start your flyod's triangle : " ;
    cin >> num ;
    cout << "\n" ;
    for ( int i = 1 ; i<=n ; i++ ){
        for ( int j = 1 ; j <= i ; j++ ){
            cout << num++ << " " ;
        }
        cout << "\n" ;
    }
    cout << "\n" ;

    return 0 ; 
}