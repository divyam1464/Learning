#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std ; 

// create a stack using template class
// template <class T>
// class Stack {
//     public: 
//         vector<T> vec ;
//         void push(T val){                // O(1) -> constant operations
//             vec.push_back(val);
//         }
//         void pop(){                        // O(1) -> constant operations
//             if(isEmpty()){
//                 cout << "Stack is Empty\n" ; 
//                 return ; 
//             }     
//             vec.pop_back();
//         }
//         T top(){                         // O(1) -> constant operations
//             // if(isEmpty()){
//             //     cout << "Stack is Empty\n" ; 
//             //     return -1; 
//             // }                      
//             int lastIdx = vec.size() - 1 ;
//             return vec[lastIdx] ;
//         }
//         bool isEmpty(){                    // O(1) -> constant operations
//             return vec.size() == 0 ;
//         }
// };

// create a stack using linked list from the STL lists class
// template<class T>
// class Stack{
//     list<T> ll ;
//     public:
//         void push (T val){
//             ll.push_front(val);
//         }
//         void pop(){
//             ll.pop_front();
//         }
//         T top(){
//             return ll.front();
//         }
//         bool isEmpty(){
//             return ll.size() == 0 ;
//         }
// };

// create a stack using your own linked list 
// template<class T>
// class Node{
//     public: 
//         T data ;
//         Node* next ;
//         Node(T val){
//             data = val ;
//             next = NULL ;
//         }
// };
// template<class T>
// class Stack{
//     Node<T>* head ;
//     public:
//         Stack(){
//             head = NULL ;
//         }
//         void push (T val){
//             Node<T> *newNode = new Node<T>(val);
//             if(head == NULL){
//                 head = newNode ;
//             }
//             else{
//                 newNode -> next = head ;
//                 head = newNode ;
//             }
//         }
//         void pop(){
//             Node<T> *temp = head ;
//             head = head -> next ;
//             temp -> next = NULL ;
//             delete temp ;
//         }
//         T top(){
//             return head -> data ;
//         }
//         bool isEmpty(){
//             return head == NULL ;
//         }
// };

int main()
{
    // Stack<int> s ;
    // s.push(3);
    // s.push(2);
    // s.push(1);
    // s.push(0);
    stack<int> s ;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){
        cout << s.top() << " " ;
        s.pop();
    }
    cout << endl ;
    return 0 ; 
}