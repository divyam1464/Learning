#include<iostream>
#include<queue>
#include<stack>
using namespace std ; 

// here we use stack as an additional data structure as the feature of it is , the elements in which the order it goes inside it comes out in reverse order 

void printQueue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop() ;
    }
    cout << endl ;
}

void reverseOrder(queue<int> &q, int k){
    cout << "My Original Queue is : " ;
    printQueue(q) ;
    stack<int> s ;
    for(int i = 0 ; i < k ; i++ ){
        s.push(q.front());
        q.pop() ;
    }
    cout << "My Queue after pushing the first k elements into the stack : " ;
    printQueue(q);
    int n = q.size() ;
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    cout << "My Queue after pushing back elements from stack to queue is : " ;
    printQueue(q) ;
    while(n){
        q.push(q.front());
        q.pop() ;
        n-- ;
    }
    cout << "My Queue after shuffling the last elements to the end of the queue and getting the final answer as the re-ordered queue is : " ;
    printQueue(q) ;
}

int main()
{
    queue<int> q ;
    for(int i=1; i<=5; i++) q.push(i) ;
    reverseOrder(q,3) ;
    return 0 ; 
}