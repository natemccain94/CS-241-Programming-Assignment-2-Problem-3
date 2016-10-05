//
//  Queue.h
//  Programming Assignment 2 Problem 3
//
//  Created by Nate McCain on 10/9/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//

#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    int front;
    int rear;
    char *items;
    int maxQueue;
public:
    Queue(int);
    Queue();
    ~Queue();
    
    void makeEmpty();
    bool isEmpty();
    bool isFull();
    void Enqueue(char newItem);
    void Dequeue(char &item);
    char Peek();
};

#endif