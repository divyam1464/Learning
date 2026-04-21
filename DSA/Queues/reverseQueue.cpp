#include<bits/stdc++.h>
using namespace std ; 
void printQueue(queue<int> q) ;

void reverseQueue(queue<int> &q){
    printQueue(q);
    stack<int> s ;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    printQueue(q) ;
}
void printQueue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop() ;
    }
    cout << endl ;
}

int main()
{
    queue<int> q ;
    for(int i=1; i<=10; i++){
        q.push(i) ;
    }
    reverseQueue(q) ;
    return 0 ; 
}