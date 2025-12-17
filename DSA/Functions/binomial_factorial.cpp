/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int n_factorial(int n){
    int n_fact = 1 ;
    while(n>0){
        n_fact *= n;
        n--;
    }
    return n_fact ;
}

int r_factorial(int r){
    int r_fact = 1 ;
    while(r>0){
        r_fact *= r;
        r--;
    }
    return r_fact ;
}

int nr_factorial(int n , int r){
    int nr_fact = 1 ;
    int nr = n - r ;
    while( nr > 0 ){
        nr_fact *= nr ;
        nr-- ;
    }
    return nr_fact ;
}

int binomial_coefficient(int n , int r){
   return ( n_factorial(n) / (r_factorial(r)*nr_factorial(n,r)) ) ;
}

int main()
{
    int n , r ;
    cout << "Enter the value of n & r : " ;
    cin >> n >> r ;
    cout << "The binomial Coefficient for n & r is : " << binomial_coefficient(n,r) ;

    return 0;
}