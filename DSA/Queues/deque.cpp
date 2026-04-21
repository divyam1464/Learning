#include<iostream>
#include<deque>
using namespace std ; 

class Queue{
    deque<int> deq ;
    public: 
        void push(int data){
            deq.push_back(data);
        }
        void pop(){
            deq.pop_front() ;
        }
        int front(){
            return deq.front() ;
        }
        bool empty(){
            return deq.empty() ;
        }
};

int main()
{
    deque<int> d ;
    d.push_front(2);
    d.push_front(1);

    d.push_back(3);
    d.push_back(4);

    d.pop_front();
    d.pop_back();

    cout << d.front() << " ";
    cout << d.back() ;
    cout << endl ;

    Queue q ;
    for(int i=1; i<=5 ; i++){
        q.push(i) ;
    }
    for(int i=1; i<=5 ; i++){
        cout << q.front() << " " ;
        q.pop() ;
    }
    
    return 0 ; 
}