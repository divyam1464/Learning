#include<iostream>
using namespace std ; 

int main()
{
    int b = 5 ;
    int a = 6;
    int *ptr = &a ;
    int *ptr1 = ptr + 3 ;
    cout << ptr1 << "\n" << ptr << "\n" ; 
    return 0 ; 
}