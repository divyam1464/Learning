#include<iostream>
using namespace std ; 

void iLastBitsClear(int n, int i){
    cout << "The last i bits have been cleared and the new number is : " << (n & ((~0) << i)) ;
}

int main()
{
    int n , i ;
    cout << "Enter the number : " ; cin >> n ;
    cout << "Enter the value of i : " ; cin >> i ;
    iLastBitsClear(n,i);
    return 0 ; 
}