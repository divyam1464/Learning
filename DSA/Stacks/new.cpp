#include<iostream>
#include<vector>
using namespace std ; 

class Stack {
    public: 
        vector<int> vec ;
        void push(int val){                // O(1) -> constant operations
            vec.push_back(val);
        }
        void pop(){                        // O(1) -> constant operations
            if(isEmpty()){
                cout << "Stack is Empty\n" ; 
                return ; 
            }     
            vec.pop_back();
        }
        int top(){                         // O(1) -> constant operations
            if(isEmpty()){
                cout << "Stack is Empty\n" ; 
                return -1; 
            }                      
            int lastIdx = vec.size() - 1 ;
            return vec[lastIdx] ;
        }
        bool isEmpty(){                    // O(1) -> constant operations
            return vec.size() == 0 ;
        }
};


int main()
{
    Stack s ;
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(0);
    s.push(-1);
    s.push(-2);

    while(!s.isEmpty()){
        cout << s.top() << endl ;
        s.pop();
    }
    
    return 0 ; 
}