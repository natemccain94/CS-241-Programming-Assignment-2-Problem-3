//
//  Queue.cpp
//  Programming Assignment 2 Problem 3
//
//  Created by Nate McCain on 10/9/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//


#include <iostream>
#include "Queue.h"

using namespace std;

// Parameterized constructor
Queue::Queue(int max) {
    maxQueue = max + 1;
    front = maxQueue -1;
    rear = maxQueue - 1;
    items = new char[maxQueue];
}

// Default constructor
Queue::Queue() {
    maxQueue = 101;
    front = maxQueue -1;
    rear = maxQueue - 1;
    items = new char[maxQueue];
}

// Destructor
Queue::~Queue() {
    delete items;
}

// Reset front and rear
void Queue::makeEmpty() {
    front = maxQueue - 1;
    rear = maxQueue -1;
}

// Return true if empty
bool Queue::isEmpty() {
    return (rear == front);
}

// Return true if full
bool Queue::isFull() {
    return ((rear+1) % maxQueue == front);
}

// Add an item to the back of the queue
void Queue::Enqueue(char newItem) {
    if(!isFull()) {
        rear = (rear+1) % maxQueue;
        items[rear] = newItem;
    }
}

// Remove an item from the front of the queue
void Queue::Dequeue(char &item) {
    if(!isEmpty())
    {
        front = (front+1) % maxQueue;
        item = items[front];
    }
}

// Peek
char Queue::Peek() {
    return items[front];
}