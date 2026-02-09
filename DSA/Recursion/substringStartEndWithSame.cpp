#include<iostream>
#include<string>
using namespace std ; 

int subString(const string &str, int i, char ch, int ct){
    if (i == str.size()){
        return (ct*(ct+1))/2 ;
    }
    if (ch == str[i]){
        ct++ ;
    }
    return subString(str,i+1,ch,ct);
}

int main()
{
    string str = "zzz";
    cout << str.size() << endl; 
    cout << subString(str,0,'z',0) << endl ;
    return 0 ; 
}