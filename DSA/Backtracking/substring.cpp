#include<iostream>
using namespace std ; 

void substring(string str, string subset){
    if(str.size()==0){
        cout << subset << endl ;
        return ;
    }

    // yes choice
    substring(str.substr(1,str.size()-1),subset+str[0]);
    // no choice
    substring(str.substr(1,str.size()-1), subset);
}

int main()
{
    string str = "abc" ;
    string subset = "";
    substring(str,subset);
    return 0 ; 
}