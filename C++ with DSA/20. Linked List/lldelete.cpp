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

        void pop_front(){
            if(head == NULL){
                cout << "List is empty";
                return; 
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;  
        }

        void pop_back(){
            if(head == NULL){
                cout << "List is empty";
                return; 
            }

            Node* prev = head;
            while(prev->next->next != NULL){    // prev->next != tail
                prev = prev->next;
            }

            prev->next = NULL;
            delete tail;
            tail = prev;
        }

        void printList(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // 1->2->3->NULL
    ll.printList();

    ll.pop_front();
    // 2->3->NULL
    ll.printList();

    ll.pop_back();
    // 2->NULL
    ll.printList();
    return 0;
}