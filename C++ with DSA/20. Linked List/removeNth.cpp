#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL; 
        }

        ~Node(){
            if(next != NULL){
                delete next;
                next = NULL;
            }
        }
};

class List{
    Node* head;
    Node* tail;
    
    public:
        List(){
            head = NULL;
            tail = NULL;
        }

        ~List(){
            if(head != NULL){
                delete head;
                head = NULL;
            }
        }
        
        void push_front(int val){
            Node* newNode = new Node(val);
            
            if(head == NULL){
                head =  tail = newNode;
            } else {
                newNode -> next = head;
                head = newNode;
            }
            
        }

        int getSize(){
            int sz = 0;
            Node* temp = head;

            while(temp != NULL){
                temp = temp->next;
                sz++;
            }
            return sz;
        }

        void removeNth(int n){
            int size = getSize();
            Node* prev = head;

            for(int i=1; i<(size-n); i++){
                prev = prev->next;
            }

            Node* toDelete = prev->next;
            prev->next = prev->next->next;

            delete toDelete;
        }

        void printList(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.printList();
    
    ll.removeNth(2);
    ll.printList();
    return 0;
}