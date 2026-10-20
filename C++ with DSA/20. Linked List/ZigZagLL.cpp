#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            this->data = val;
            this->next = NULL; 
        }

        // ~Node(){
        //     if(next != NULL){
        //         delete next;
        //         next = NULL;
        //     }
        // }
};

class List{
    public:
        Node* head;
        Node* tail;

        List(){
            head = NULL;
            tail = NULL; 
        }

        // ~List(){
        //     if(head != NULL){
        //         delete head;
        //         head = NULL;
        //     }
        // }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout << "List Empty\n";
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
};

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(prev != NULL){
        prev->next = NULL;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;       //Prev is the new head
}

Node* zigZagLL(Node* head){
    Node* Rhead = splitAtMid(head);
    Node* RheadRev = reverse(Rhead);

    // Alternate Merging
    // 1st head : head & 2nd head : RheadRev

    Node* left = head;
    Node* right = RheadRev;
    Node* tail = right;
    
    Node* nextLeft = NULL;
    Node* nextRight = NULL;

    while(left != NULL && right != NULL){
        nextLeft = left->next;
        nextRight = right->next;

        left->next = right;
        right->next = nextLeft;
        tail = right;

        left = nextLeft;
        right = nextRight;
    }
    
    if(right != NULL){
        tail->next = right;
    }
    
    return head;
}

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    printList(ll.head);
    // 1->2->3->4->5->NULL

    ll.head = zigZagLL(ll.head);
    printList(ll.head);
    // 1->5->2->4->3->NULL

    return 0;
}

