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

        // Destructor to delete dynamically allocated memory 
        // ~List(){
        //     Node* temp = head;
        //     while(temp != NULL){
        //         head = head->next;
        //         delete temp;
        //         temp = head;
        //     }
        //     tail = NULL;
        // }

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
        
        void insertInMiddle(int val, int pos){
            Node* newNode = new Node(val);
            Node* temp = head;
            
            for(int i=0; i<pos-1; i++){
                if(temp == NULL){
                    cout << "Position is INVALID";
                    return;
                }
                //pos-1 because already pointing to next node in each iteration
                temp = temp->next;  
            }
            
            //New Connection
            newNode->next = temp->next;
            
            // Updating Old Connection of prev
            temp->next = newNode;
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

    //Insert 100 after 2
    ll.insertInMiddle(100,2);
    ll.printList();
    return 0;
}