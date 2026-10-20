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
    if(prev != NULL){       // Edge case for single node
        prev->next = NULL;  //Connection broken and Splitted
    }
    return slow;
}

Node* merge(Node* Lhead, Node* Rhead){
    List ans;
    Node* i = Lhead;
    Node* j = Rhead;

    while(i != NULL && j != NULL){
        if(i->data <= j->data){
            ans.push_back(i->data);
            i = i->next;
        } else {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while(i != NULL){
        ans.push_back(i->data);
        i = i->next;
    }

    while(j != NULL){
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;
}

Node* mergeSort(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* rightHead = splitAtMid(head);

    Node* left = mergeSort(head);   //Left Head
    Node* right = mergeSort(rightHead);     //Right Head

    return merge(left, right); //head of sorted LL
}

int main(){
    List ll;
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);

    printList(ll.head);

    ll.head = mergeSort(ll.head);
    printList(ll.head);

    return 0;
}