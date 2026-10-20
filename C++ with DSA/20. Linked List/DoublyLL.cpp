#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int val){
            this->data = val;
            prev = next = NULL;
        }
};

class DoublyList{
    public:
        Node* head;
        Node* tail;

        DoublyList(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = tail = newNode;
            } else {
                // Node* temp = head;
                // while(temp->next != NULL){
                //     temp = temp->next;
                // }
                // temp->next = newNode;
                // newNode->prev = temp;

                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;

            }
        }

        void pop_front(){
            if(head == NULL){
                return;
            }

            Node* temp = head;
            head = head->next;
            if(head != NULL){
                head->prev = NULL;
            }

            temp->next = NULL;
            delete temp;
        }

        void pop_back(){
            if(head == NULL){
                return;
            } else {
                // Node* temp = head;
                // while(temp->next->next != NULL){
                //     temp = temp->next;
                // }
                // Node* delNode = temp->next;
                // temp->next = NULL;
                // delNode->prev = NULL;
                // delete delNode;

                Node* newTail = tail;
                tail = newTail->prev;

                tail->next = NULL;
                newTail->prev = NULL;

                delete newTail;
            }
        }

        void printList(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " <=> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

int main(){
    DoublyList dll;

    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.printList();

    dll.push_back(5);
    dll.printList();

    dll.pop_front();
    dll.pop_back();
    dll.printList();

    return 0;
}