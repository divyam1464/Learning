#include<iostream>
using namespace std ; 

void setBit(int n, int i){
    cout << "The Bit has been set.\n" << (n|(1 << i)) ; 
}

int main()
{
    int n , i ;
    cout << "Enter the number : " ; cin >> n ;
    cout << "Enter the value of i : " ; cin >> i ;
    setBit(n,i);
    return 0 ; 
}