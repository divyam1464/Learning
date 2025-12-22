#include<iostream>
using namespace std ; 

void countSetBit(int n){
    int count = 0 ;
    while(n>0){
        int l = n & 1 ;
        count += l ;
        n = n >> 1 ;
    }
    cout << "The count of the set bit is : " << count << endl ;
}

int main()
{
    int n; 
    cout << "Enter the Number : " ; cin >> n ;
    countSetBit(n);
    return 0 ; 
}