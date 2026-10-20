#include<iostream>
#include<list>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node* next;

        Node(T val){
            this->data = val;
            this->next = NULL;
        }
};


template<class T>
class Stack{
    Node<T>* head;

    public: 
        Stack(){
            head = NULL;
        }

        void push(T val){
            // Push_front
            Node<T>* newNode = new Node<T>(val);
            if(head == NULL){
                head = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }
        }

        void pop(){
            // Pop_front
            Node<T>* delNode = head;
            head = head->next;

            delNode->next = NULL;
            delete delNode;
        }

        T top(){
            return head->data;
        }

        bool isEmpty(){
            return head == NULL;
        }
};

int main(){
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}