#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> vec;

    public:
        bool isEmpty(){
            return vec.size() == 0;
        }

        void push(int val){
            vec.push_back(val);
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack is empty\n";
                return; 
            }
            vec.pop_back();
        }

        int top() {
            if(isEmpty()){
                cout << "Stack is empty\n";
                return -1;
            }
            int lastIdx = vec.size()-1;
            return vec[lastIdx];
        }
};

int main(){
    Stack s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}