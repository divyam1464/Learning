#include<iostream>
#include<stack>
using namespace std ; 

class queue {
    stack<int> s1, s2 ;
    public:
        void push(int data){              // O(N)
                                          // 1. s1 -> s2
                                          // 2. s1.push(data)
                                          // 3. s2 -> s1 
            
            while(!s1.empty()){           // step - 1 
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(data);                // step - 2 

            while(!s2.empty()){           // step - 3 
                s1.push(s2.top());
                s2.pop();
            }
        }

        void pop(){                       // O(1)
            s1.pop() ;
        }

        int front(){                      // O(1)
            return s1.top() ;
        }
        bool empty(){
            s1.empty() ;
        }
};

int main()
{
    // queue using 2 stacks 
    queue q ;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front()  << " " ;
        q.pop() ;
    }
    cout << endl ;
    return 0 ; 
}