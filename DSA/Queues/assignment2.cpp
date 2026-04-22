#include<iostream>
#include<queue>
#include<vector>
using namespace std ; 

void printQueue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop() ;
    }
    cout << endl ;
    return ;
}
void printVector(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " ;
    }
    cout << endl ;
    return ;
}

int gasStation(vector<int> gas, vector<int> cost){
    queue<int> q ;
    for(int i=0 ; i<gas.size(); i++){
        q.push(i) ;
    }
    cout << "Indexes = " ;
    printQueue(q) ;
    while(!q.empty()){
        if(gas[q.front()] < cost[q.front()]){
            q.push(q.front());
            q.pop() ;
        } else{
            break ;
        }
    }
    printQueue(q) ;
    cout << "Let's begin the adventure.......\n" ;
    int original_position_index = q.front() ;
    int fuel = 0 ;
    while(!q.empty()){
        fuel += gas[q.front()] - cost[q.front()] ;
        if(fuel >= 0 ){
            q.push(q.front());
            q.pop();
        } else{
            cout << "Can't Reach .. ....\n";
            return -1 ;
            break ;
        }
        if(q.front() == original_position_index){
            cout << "Reached the desired postion .....\n" ;
            break ;
        }
    }
    return q.front() ;
}

int main()
{
    vector<int> gas ;
    vector<int> cost ;
    gas.push_back(1);
    gas.push_back(2);
    gas.push_back(3);
    gas.push_back(4);
    gas.push_back(5);
    cost.push_back(3);
    cost.push_back(4);
    cost.push_back(5);
    cost.push_back(1); 
    cost.push_back(2); 
    cout << "Gas  = " ;
    printVector(gas);
    cout << "Cost = " ;
    printVector(cost);
    int ans = gasStation(gas,cost);
    cout << ans << endl ;

    
    return 0 ; 
}