#include<iostream>
#include<stack>
#include<string>
#include<vector>
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

void printArray(vector<int> vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " " ;
    }
    cout << endl ;
}

void maxAreaHistogram(vector<int> height){
    vector<int> nsl(height.size()) ;
    vector<int> nsr(height.size()) ;
    stack<int> s ;

    // next smaller left we will calculate
    // as for the first element the next smaller left is always 1 that's why it is this 
    nsl[0] = -1 ;
    s.push(0);
    // so we started the loop with 1 itself
    for(int i = 1; i<height.size(); i++){
        int currentElement = height[i] ;
        while(!s.empty() && currentElement <= height[s.top()]){
            s.pop() ;
        } 
        if(s.empty()){
            nsl[i] = -1 ;
        }else{
            nsl[i] = s.top() ;
        }
        s.push(i);
    }
    cout << "Next Smaller left array is : " ;
    printArray(nsl) ;

    // emptying the current stack so as to use again for the second purpose
    while(!s.empty()){
        s.pop();
    }
    // next smaller right we will calculate 
    int n = height.size() ;
    s.push(n-1) ;
    nsr[n-1] = n ;
    for(int i = n - 2 ; i >= 0 ; i-- ){
        int curr = height[i] ;
        while(!s.empty() && curr <= height[s.top()]){
            s.pop() ;
        }
        if(s.empty()){
            nsr[i] = n ;
        }else{
            nsr[i] = s.top() ;
        }
        s.push(i) ;
    }
    cout << "Next Smaller Right array is : " ;
    printArray(nsr) ;


    // now let's calculate the area of the rectangles 
    int maxArea = 0 ;
    for(int i = 0 ; i < height.size(); i++){
        int ht = height[i] ;
        int width = nsr[i] - nsl[i] - 1 ;
        int area = ht * width ;
        maxArea = max(area, maxArea) ;
    }
    cout << "Max area of histogram is : " << maxArea << endl ;
}


int main()
{ 
    // string s1 = "([}])" ;               // Invalid one 
    // string s2 = "([{}])" ;              // Valid one 
    // string s3 = "((a+b))" ;             // Valid one 
    // string s4 = "((a+b)+(c+d))" ;     // Valid one 

    // cout << isValid(s1) << endl ;
    // cout << isValid(s2) << endl ;
    // cout << isDuplicate(s3) << endl ;
    // cout << isDuplicate(s4) << endl ;

    vector<int> height = {2, 1, 5, 6, 2, 3} ;
    maxAreaHistogram(height) ;
    
    return 0 ; 
}