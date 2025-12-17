#include<iostream>
#include<string>
using namespace std ; 

bool isAnagaram(string str1, string str2){
    if (str1.length() != str2.length()) { 
        cout << "Not Valid Anagrams !\n" ;
        return false; 
    }
    int count[26] = {0} ;
    
    for ( int i = 0 ; i < str1.length(); i++ ){
        count[str1[i] - 'a']++ ;
    }
    for ( int i = 0 ; i < str2.length(); i++ ){
        if ( count [str2[i] - 'a'] == 0 ){
            cout << "Not Valid Anagrams !\n" ;
            return false ;
        }
        count[str2[i] - 'a']-- ;
    }
    cout << "Valid Anagrams.... !\n" ;
    return true ;
}

int main()
{
    string str1 = "anagra" ;
    string str2 = "nagaram" ;
    isAnagaram(str1,str2) ;
    return 0 ; 
}