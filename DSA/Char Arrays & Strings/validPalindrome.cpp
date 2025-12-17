#include<iostream>
#include<cstring>
using namespace std ; 

bool validPalindrome(char ch[], int n){
    int start = 0 ; int end = n - 1 ;
    while(start <= end){
        if ( ch[start] != ch[end] ){
            cout << "It is not a Pallindrome Word ! " << endl ;
            return false ;
        }
        start++ ;
        end-- ;
    }
    cout << "It is a Pallindrome Word ! " << endl ;
    return true ;
}

int main()
{
    char word[] = "malayalam" ;
    validPalindrome(word,strlen(word)) ;
    return 0 ; 
}