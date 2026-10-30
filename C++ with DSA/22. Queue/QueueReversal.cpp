#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void revQueue(queue<int> &q){
    int size = q.size();

    stack<int> s;

    for(int i=0; i<size; i++){
        s.push(q.front());
        q.pop();
    }

    for(int i=0; i<size; i++){
        q.push(s.top());
        s.pop();
    }

}

int main(){
    queue<int> q;

    for(int i=1; i<=10; i++){
        q.push(i);
    }

    revQueue(q);

    for(int i=1; i<=10; i++){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}