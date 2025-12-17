#include<iostream>
using namespace std ; 

void binToDec(int binNum){
    int n = binNum ;
    int decNum = 0 ;
    int pow = 1 ;
    while(n>0){
        int lastdigit = n % 10 ;
        decNum += lastdigit*pow;
        pow *= 2 ;
        n /= 10 ;
    }
    cout << decNum << "\n" ;
}

int main()
{
    binToDec(10100000) ;
    return 0 ; 
}