#include<iostream>
using namespace std ; 

class Queue{
    public:
        int *arr ; // dynamically allocated array , so a pointer to that array 
        
        int capacity ;  // total size of our array 
        int currSize ;   // how many elements are currently stored in the queue
        int f , r ; // two pointers to move 

        Queue(int capacity){
            this -> capacity = capacity ;
            arr = new int[capacity] ;
            currSize = 0 ;

            f = 0 ;
            r = -1 ;
        }
        void push(int val){  // O(1)
            if(currSize == capacity ){
                cout << "Queue is Full\n" ;
                return ;
            }
            r = (r + 1)  % capacity ;
            arr[r] = val ; // store the data in this location now
            currSize ++ ; // update the current size of the array that now how many elements are there in the array 
        }
        void pop(){ // O(1)
            if(isEmpty()){
                cout << "Queue is Empty\n" ;
                return ;
            }
            f = (f + 1) % capacity ;
            currSize -- ;
        }
        int front(){ // O(1)
            if(isEmpty()){
                cout << "Queue is empty\n" ;
                return -1 ;
            }
            return arr[f] ;
        }
        bool isEmpty(){ // O(1)
            return currSize == 0 ; 
        }
};

int main(){
    Queue q(4); 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl ;
    q.pop();
    cout << q.front() << endl ;
    q.push(5);
    cout << q.front() << endl ;
    

    return 0 ; 
}