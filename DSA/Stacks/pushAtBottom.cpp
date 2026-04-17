#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std ; 

void printStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " " ;
        s.pop() ;
    }
}

void pushAtBottom(stack<int> &s, int value){
    if(s.empty()){
        s.push(value);
        return ;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s,value);
    s.push(temp);
}

string reverseString(string str){
    string ans ;
    stack<char> s ;

    // pushing into the stack simple
    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }

    // now just popping the stack and storing it in answer 
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    return ans ;
}

void reverse(stack<int> &s){
    if(s.empty()){
        return ;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,temp);
}

void stockSpanProblem(vector<int> stock, vector<int> span){
    stack<int> s ;
    s.push(0);
    span[0] = 1 ;
    for(int i=1 ; i < stock.size(); i++){
        while(!s.empty() && stock[i] >= stock[s.top()]){
            s.pop() ;
            
        }   
        if(s.empty()){
            span[i] = i + 1 ;
        }else{
            int prevHigh = s.top() ;
            span[i] = i - prevHigh ; 
        }
    }
    for(int i=0; i<span.size(); i++){
        cout << span[i] << " " ;
    }
    cout << endl ;
}


int main()
{
    // stack<int> s ;
    // s.push(1);    
    // s.push(2);    
    // s.push(3);    

    // pushAtBottom(s,4);
    // while(!s.empty()){
    //     cout << s.top() << " " ;
    //     s.pop();
    // }
    // cout << endl ;


    // string str = "abcdefghijklmnopqrstuvwxyz" ;
    // cout << "reverse is : " << reverseString(str) << endl ;


    // printStack(s);
    // reverse(s);
    // cout << endl ;
    // printStack(s);


    vector<int> stock  = {100, 80, 60 , 70, 60 , 85 , 100}; 
    vector<int> span = {0, 0, 0, 0, 0, 0, 0} ;
    stockSpanProblem(stock,span);

    return 0 ; 
}