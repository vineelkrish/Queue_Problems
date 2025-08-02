#include <bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

//And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; 

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode* newNode = new QueueNode(x);
        if(front==NULL && rear==NULL)
        {
            front=rear=newNode;
            return;
        }
        rear->next=newNode;
        rear=rear->next;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code 
        if(front==NULL)
        {

        return -1;
        }
        int temp=front->data;
        QueueNode* tempNode=front;
        front=front->next;
        delete tempNode;
        if(front == nullptr) rear=nullptr;
        return temp;
}
