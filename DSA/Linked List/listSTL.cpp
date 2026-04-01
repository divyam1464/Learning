#include<iostream>
#include<list>
#include<iterator>
using namespace std ; 

void printList(list<int> ll){
    // creating a iterator
    list<int> :: iterator itr ;
    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout << *(itr) << " -> " ;
    }
    cout << "NULL" <<endl ;
}

int main()
{
    list<int> ll ;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); // 1-> 2 -> 3 -> 4 
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);

    printList(ll);
    cout << ll.size() << endl ;
    cout << "Head is : " << ll.front() << endl << "Tail is : " << ll.back() << endl;
    ll.pop_front();
    printList(ll);
    ll.pop_back();
    printList(ll);
    
    return 0 ; 
}