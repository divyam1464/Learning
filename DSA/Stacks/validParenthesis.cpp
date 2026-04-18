#include<iostream>
#include<stack>
#include<string>
using namespace std ; 

bool isValid(string str){
    stack<char> s ;
    for(int i=0; i<str.size(); i++){
        char ch = str[i] ;
        if( ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }
        else{
            if(s.empty()){
                return false ;
            }
            else{
                int top = s.top() ;
                if( (top == '(' && ch == ')') ||
                    (top == '[' && ch == ']') || 
                    (top == '{' && ch == '}') ){
                        s.pop();
                    }
                else{
                    return false ;
                }
            }
        }
    }
    return s.empty() ;
}

bool isDuplicate(string str){
    stack<char> s ;
    for(int i = 0 ; i < str.size(); i++){
        char ch = str[i] ;
        if ( ch != ')' ){ // non - closing elements are present then push into the stack everything
            s.push(ch) ;
        }
        else{ // closing case when we encounter the closing brackets
            if(s.top() == '('){
                return true ; /// Duplicate condition
            }
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false ;
}

int main()
{ 
    string s1 = "([}])" ;               // Invalid one 
    string s2 = "([{}])" ;              // Valid one 
    string s3 = "((a+b))" ;             // Valid one 
    string s4 = "((a+b)+(c+d))" ;     // Valid one 

    // cout << isValid(s1) << endl ;
    // cout << isValid(s2) << endl ;
    cout << isDuplicate(s3) << endl ;
    cout << isDuplicate(s4) << endl ;
    
    return 0 ; 
}