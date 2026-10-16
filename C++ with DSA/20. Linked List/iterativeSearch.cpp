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
    public:
        Node* head;
        Node* tail;

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
        
        int searchItr(int key){
            Node* temp = head;
            int pos = 0;
            while(temp != NULL){
                if(temp->data == key){
                    return pos;
                } 
                temp = temp->next;
                pos++;
            }
            cout << "Key not found" << endl;
            return -1;
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
    
    
    int pos = ll.searchItr(4);
    cout << "Key found at pos: " << pos << endl;
    return 0;
}