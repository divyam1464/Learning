#include<iostream>
using namespace std ; 

void fastExpo(int x, int n){
    int ans = 1 ;
    while(n>0){
        int lastBit = n & 1 ;
        if (lastBit) ans *= x ;
        x *= x ;
        n = n >> 1 ;
    }
    cout << "The Final ans is : " << ans << endl ;
}

int main()
{
    int n , x ;
    cout << "Enter the number : " ; cin >> n ;
    cout << "Enter the power : " ; cin >> x ;
    fastExpo(n,x);
    return 0 ; 
}