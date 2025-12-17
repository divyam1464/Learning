#include<iostream>
#include<cstring>
using namespace std ; 

int main()
{
    // char word[30] ;
    // cin >> word ;

    // cout << "Entered word is : " << word << endl ;
    // cout << "Entered word length is : " << strlen(word) << endl ;

    char word[300] ;
    cin.getline(word,300,',');

    cout << "Entered word is : " << word << endl ;
    cout << "Entered word length is : " << strlen(word) << endl ;

    return 0 ; 
}