#include<iostream>
#include<cstring>
using namespace std ; 

int main()
{
    char ch[100] ;
    strcpy(ch,"Hello");
    cout << ch << endl ;

    char ch1[100] = " World" ;
    strcpy(ch,ch1) ;
    cout << ch << endl ;
    cout << ch << endl ;

    strcat(ch,ch1);
    cout << ch << endl ;

    char ch3[100] = "abc" ;
    char ch2[100] = "xyz" ;
    
    cout << strcmp(ch2,ch3);
    

    
    return 0 ; 
}