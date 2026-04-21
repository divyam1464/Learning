#include<iostream>
#include<queue>
using namespace std ; 

void interleave(queue<int> &q){ // here we have to pass by reference not pass by value 
    int n = q.size() ; // to calculate the size of the queue
    queue<int> first ; // to store the first half of the queue

    for(int i=0 ; i<n/2; i++){
        first.push(q.front());
        q.pop() ;
    }
    while(!first.empty()){
        q.push(first.front()) ;
        first.pop() ;

        q.push(q.front()) ;
        q.pop() ;
    }
}

int main()
{
    queue<int> original ;
    for(int i = 1; i <= 10; i++){
        original.push(i) ;
    }
    
    interleave(original);
    for(int i=0; i<10; i++){
        cout << original.front() << " " ;
        original.pop() ;
    }
    cout << endl ;
    return 0 ; 
}