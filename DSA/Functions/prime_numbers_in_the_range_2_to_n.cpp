#include<iostream>
using namespace std ; 

bool isPrime(int n){
    if ( n == 1 ){
        return false ;
    }
    for ( int i = 2 ; i < n ; i++ ){
        if ( n%i == 0 ){
            return false ;
        }
    }
    return true ;
}

int Primes_in_range(int n){
    int count = 0 ;
    if ( n == 1 ){
        return 0 ;
    }
    for ( int i = 2 ; i <= n ; i++ ){
        if ( isPrime(i) == 1 ){
            cout << i << " " ; 
            count++ ;
        } else{
            continue;
        }
    }
    cout << "\n" ;
    return count ;
}

int main()
{
    int n ;
    cout << "Enter the range : " ;
    cin >> n ;
    cout << "The Primes are : " <<Primes_in_range(n) ;
    return 0 ; 
}