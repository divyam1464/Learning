#include<iostream>
#include<string>
using namespace std ; 

int main()
{
    string str = "Apna College" ;   
    for(char ch:str){
        cout << ch << "-" ;
    }
    cout << endl ;
    cout << str.find("College") << endl ;
    
    return 0 ; 
}