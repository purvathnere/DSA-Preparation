#include<iostream>
#include<queue>
using namespace std;

const int n = 20;

class Queue {
    int *arr;
    int front;
    int back;
public:
    Queue() {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x) {
        if(back == n - 1) {
            cout << "Queue Overflow" << endl;
        }
        back++;
        arr[back] = x;
        if(front == -1) {
            front++;
        }
    }

    void pop() {
        if(front == -1 || front > back) {
            cout << "No Elements in queue" << endl;
            return;
        }
        front++;
    }

    int peek() {
        if(front == -1 || front > back) {
            cout << "No Elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty() {
        if(front == -1 || front > back) {
            return true;
        }
        return false;
    }
};

int main() {
    Queue q;
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.empty() << endl;
}
