#include<iostream>
#include<queue>
using namespace std ; 

void printQueue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop() ;
    }
    cout << endl ;
    return ;
}

void timeNeedToBuyTickets(queue<int> q, int k){
    vector<int> v ;

    while(!q.empty()){
        v.push_back(q.front());
        q.pop() ;
    }
    
    
    int time_taken = 0 ;
    while(!q.empty()){
        if(q.front() == 0){
            q.pop() ;
        }else{
            q.front() -- ;
            time_taken ++ ;
            q.push(q.front()) ;
            q.pop() ;
        }
    }
    cout << time_taken << endl ;
    printQueue(q);
}



int main()
{
    queue<int> q ;
    q.push(5);
    q.push(1);
    q.push(1);
    q.push(1);
    timeNeedToBuyTickets(q,2);
    
    return 0 ; 
}