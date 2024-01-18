#include<iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear;
    int size;
    int *arr;

public:
    CircularQueue(int s) {
        size = s;
        arr = new int[size];
        front = rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == front - 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enQueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        cout << value << " enqueued to the queue." << endl;
    }

    void deQueue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << arr[front] << " dequeued from the queue." << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. No element to peek." << endl;
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        cout << endl;
    }
};

int main() {
    CircularQueue cq(5);

    cq.enQueue(1);
    cq.enQueue(2);
    cq.enQueue(3);
    cq.display();

    cout << "Front element: " << cq.peek() << endl;

    cq.deQueue();
    cq.display();

    cq.enQueue(4);
    cq.enQueue(5);
    cq.enQueue(6);  // This should fail as the queue is full
    cq.display();

    return 0;
}
