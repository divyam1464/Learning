#include<iostream>
using namespace std ; 

void rangeBitsClear(int n , int i , int j){
    int left = (~0) << (j+1) ;
    int right = (1 << j) - 1;
    int mask = left | right ;
    cout << "The Number is set and the final number is : " << (n && mask) << endl ;
}

int main()
{
    int n , i , j ;
    cout << "Enter the number : " ; cin >> n ;
    cout << "Enter the value of range from i to j : " ; cin >> i >> j ;
    rangeBitsClear(n,i,j);
    return 0 ; 
}