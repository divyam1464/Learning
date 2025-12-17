#include<iostream>
using namespace std ; 

// pass by reference using pointers
// void changeA(int *ptr){
//     *ptr = 25 ;
//     cout << "Value in a is through function is : " << *ptr << "\n" ;
// }

// pass by reference using Reference Variables
void changeA(int &reference){
    reference = 25 ;
    cout << "Value in a is through function is : " << reference << "\n" ;
}

int main()
{
    int a = 10 ;
    cout << "Value of a in the main function before calling the function is : " << a << "\n" ;
    changeA(a) ;

    cout << "Value of a in the main function after calling the function is : " << a << "\n" ;
    
    // int &b = a ;
    // cout << "Value before changing reference variable : " << a << " and of b is also : " << b << "\n";
    // b = 25 ;
    // cout << "Value after changing reference variable : " << a << " and of b is also : " << b << "\n";
    return 0 ; 
}