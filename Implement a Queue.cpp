#include <bits/stdc++.h> 
#include<iostream>
#include<queue>
class Queue{
    int *arr;
    int size;
    int qfront;
    int rear;
public:
//Creating a constructor
Queue()
{
    size=100001;
    arr = new int[size];
    qfront=0;
    rear=0;
} 
void enqueue(int data)
{
    if(rear==size)
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        arr[rear]= data;
        rear++;
    }
} 
int dequeue()
{
    if(qfront==rear)
    {
        return -1;
    }
    else{
        int ans=arr[qfront];
        arr[qfront]=-1;
        qfront++;
        if(qfront==rear)
        {
            qfront=0;
            rear=0;
        }
        return ans;
    }
} 
int front()
{
    if(qfront==rear)
    {
        return -1;
    }
    else{
        return arr[qfront];
    }
}
bool isEmpty()
{
    if(qfront==rear)
    {
        return true;
    }
    else{
        return false;
    }
} 
};
