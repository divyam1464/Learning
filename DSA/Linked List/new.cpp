#include<iostream>
#include<list>
using namespace std ; 

class Node{
    public:
        int data ;
        Node *next ;
        Node(int val){
            data = val;
            next = NULL ;
        }

        // to delete a node
        ~Node(){
            if(next != NULL ){
                delete next ;
                next = NULL ; 
            }
        }
};

class List{
    public:
        Node *head ;
        Node *tail ;

        // to delete the linked list
        ~List(){
            if(head != NULL){
                delete head ;
                head = NULL ;
            }
        }
        List(){
            head = NULL ;
            tail = NULL ;
        }

        void push_front(int val){
            Node* newNode = new Node(val); // Dynamic Allocation and doesn't depend on function call

            // Node *newNode(val); // Static Allocation as upon coming out of the function it gets destroyed.
        
            if(head == NULL){
                head = tail = newNode;
            }
            else{
                newNode->next = head ;
                head = newNode;
            }
        }
        void push_back(int val){
            Node *newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode ;
            }
            else{
                tail -> next = newNode ;
                tail = newNode ;
            }
        }
        void printList(){
            Node *temp = head ;
            while(temp != NULL){
                cout << temp->data << " " ;
                temp = temp -> next ;
            }
            cout << endl ;
        }
        void insert(int val, int pos){
            Node *newNode = new Node(val);
            Node *temp  = head ;
            for(int i=0; i<pos-1; i++){
                if(temp == NULL){
                    cout << "Position is invalid\n";
                    return ;
                }
                temp = temp-> next ;
            }
            // Right node connection first 
            newNode -> next = temp -> next ;
            // Update the connection of previous node to new Node
            temp -> next = newNode ;
        }
        void pop_front(){
            if(head == NULL){
                cout << "LL is empty\n" ;
                return ;    
            }
            Node *temp = head ;
            head = head -> next ;
            temp -> next = NULL ;
            delete temp ;
        }
        void pop_back(){
            Node *temp = head ;
            while(temp -> next -> next != NULL){
                temp = temp -> next ;
            }
            temp -> next = NULL ;
            delete tail ;
            tail = temp ;
        }
        int searchItr(int key){
            Node *temp = head ;
            int idx = 0 ;
            while(temp != NULL){
                if(temp->data == key){
                    return idx ;
                }
                temp = temp-> next ;
                idx++ ;
            }
            return -1 ;
        }
        int helper(Node *temp,int key){
            // Base Case
            if(temp == NULL){
                return -1 ;
            }
            
            // When found the key
            if(temp->data == key){
                return 0 ;
            }
            int idx = helper(temp->next, key);
            if(idx == -1){
                return -1;
            }
            return idx + 1 ;
        }
        int searchRec(int key){
            return helper(head,key);
        }
        void reverse(){
            Node *prev = NULL ;
            Node *curr = head ;

            // to update tail also 
            tail = head ;

            while(curr != NULL){
                Node *next = curr -> next ;
                curr -> next = prev ;
                prev = curr ;
                curr = next ;
            }
            head = prev ;
        }
        int getSize(){
            Node *temp = head ;
            int size = 0 ;
            while(temp != NULL){
                temp = temp -> next ;
                size ++ ;
            }
            return size ;
        }
        void removeNth(int n){
            int size = getSize();
            Node *prev = head ;
            for(int i=1; i<(size-n); i++){
                prev = prev -> next ;
            }

            // print the node which we are going to delete
            Node *toDelete = prev->next ;
            cout << "Going to delete : " << toDelete -> data << endl ;
            prev -> next = prev -> next -> next ;
        }
        void custom(){
            Node *temp = head ;
            while(temp -> next != NULL){
                temp = temp -> next ;
            }
            cout << temp -> data << endl << temp -> next << endl ;
        }
        bool isCycle(){
            Node *slow = head;
            Node *fast = head;
            while(fast != NULL && fast -> next != NULL){
                slow = slow -> next ;
                fast = fast -> next -> next ;
                if(slow == fast){
                    cout << "Cycle Exists\n";
                    return true ;
                }
            }
            cout << "Cycle do not exists\n";
            return false ;
        }
        void removeCycle(){
            Node *slow = head , *fast = head ;
            bool isCycle = false ;

            // 1. Detect Cycle
            while(fast != NULL && fast -> next != NULL){
                slow = slow -> next ;
                fast = fast -> next -> next ;
                if(slow == fast){
                    isCycle = true ;
                    cout << "cycle exists\n";
                    break ;
                }
            }

            // checking that the cycle exists or not
            if(!isCycle){
                cout << "Cycle do not exists\n";
                return ;
            }

            // 2. slow == head 
            slow = head ;
            
            // Special Case when slow and fast meets at the head point node
            if(slow == fast){
                while(fast -> next != slow){
                    fast = fast -> next ;
                }
                // removing the cycle
                fast -> next = NULL ; 
            }
            else{
                Node *prev = fast ;
                while(slow != fast){
                    slow = slow -> next ;
                    prev = fast ;
                    fast = fast -> next ;
                }
                // 3. Removing the cycle
                prev -> next = NULL ;
            }
        }
        Node* splitAtMid(Node *head){
            Node *slow = head, *fast = head ;
            Node *prev = NULL ;
            while(fast != NULL && fast -> next != NULL){
                prev = slow ;
                slow = slow -> next ;
                fast = fast -> next -> next ;
            }

            if(prev != NULL){
                prev -> next = NULL; // split at middle

            }
            return slow ; // slow = rightHead

        }
        Node* merge(Node* left, Node *right){
            list<int> ans ;
            Node* i = left ;
            Node *j = right ;

            while(i != NULL && j != NULL){
                if (i -> data <= j -> data){
                    ans.push_back(i -> data);
                    i = i -> next ;
                }
                else{
                    ans.push_back(j -> data);
                    j = j -> next ;
                }
            }

            // to travel the remaining first and second linked list
            while(i != NULL){
                ans.push_back(i -> data);
                i = i -> next ;
                
            }
            while(j != NULL){
                ans.push_back(j -> data);
                j = j -> next ;
            }
            return head ;
        }
        Node* mergeSort(Node *head){
            if(head == NULL || head -> next == NULL){
                return head ;
            }

            Node *rightHead = splitAtMid(head);

            Node* left = mergeSort(head); // left half
            Node* right = mergeSort(rightHead); // right half

            return merge(left, right); // head of sorted ll
        }
};

Node* splitAtMid(Node *head){
            Node *slow = head, *fast = head ;
            Node *prev = NULL ;
            while(fast != NULL && fast -> next != NULL){
                prev = slow ;
                slow = slow -> next ;
                fast = fast -> next -> next ;
            }

            if(prev != NULL){
                prev -> next = NULL; // split at middle

            }
            return slow ; // slow = rightHead

}

Node* reverse(Node *head){
    Node* prev = NULL ;
    Node* curr = head ;
    Node* next = NULL ;
    while(curr != NULL){
        next = curr -> next ;
        curr -> next = prev ;

        prev = curr ;
        curr = next ;
    }

    // now prev is head of current reversed linked list
    return prev ;

}

Node* zigzagLL(Node *head){

    Node *rightHead = splitAtMid(head);
    Node *rightHeadReverse =  reverse(rightHead);

    // alternate merging for two lists
    Node* left = head ;
    Node* right = rightHeadReverse ;
    Node* tail = right ;

    while(left != NULL && right != NULL){
        Node *nextLeft = left -> next ;
        Node *nextRight = right -> next ;

        left -> next = right  ;
        right -> next = nextLeft ;
        tail = right ;

        left = nextLeft ;
        right = nextRight ; 
    }
    // in case of odd size linked list 
    if(right != NULL){
        tail -> next = right ;
    }
    return head ;

}

int main()
{
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    // for merge sort in ll 
    // ll.head = mergeSort(ll.head); 
    ll.printList();

    zigzagLL(ll.head);
    ll.printList();
    return 0 ; 
}