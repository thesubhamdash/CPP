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

        int helper(Node* head, int key){

            if(head == NULL){
                return -1;
            }

            if(head->data == key){
                return 0;
            }

            int idx = helper(head->next, key);
            if(idx == -1){
                return -1;
            }
            return idx+1;
        }
        
        int searchRec(int key){
            return helper(head, key);
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
    
    
    int pos = ll.searchRec(4);
    cout << "Key found at pos: " << pos << endl;
    return 0;
}