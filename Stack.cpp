//
//  Stack.cpp
//  Programming Assignment 2 Problem 3
//
//  Created by Nate McCain on 10/10/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//



#include <stdio.h>
#include "Stack.h"
#include <iostream>

using namespace std;

// Default Constructor
stack::stack() {
    top = -1;
    originalTop = -1;
    
}

// Single Item Stack Constructor
stack::stack(char item) {
    top = -1;
    originalTop = -1;
    Push(item);
}

// Copy Stack Constructor
stack::stack(stack const & stack) {
    top = -1;
    originalTop = -1;
    for (int i = 0; i <= stack.top; i++)
    {
        Push(stack.items[i]);
    }
}


// IsEmpty function
bool stack::IsEmpty() const{
    return (top == -1);
}

// IsFull function
bool stack::IsFull() const{
    return (top == MAX_ITEMS - 1);
}

// Push function
void stack::Push(char item) {
    if (IsFull())
    {
        cout << "Cannot Push a full stack." << endl;
    }
    else
    {
        top++;
        originalTop++;
        items[top] = item;
    }
}


// Pop function
void stack::Pop() {
    if (IsEmpty())
    {
        cout << "Cannot Pop an empty stack." << endl;
    }
    else
    {
        top--;
    }
}

// Top function
char stack::Top() const {
    if (IsEmpty())
    {
        return -1;
    }
    else
    {
        return items[top];
    }
}


// Print function that prints the entire stack.
void stack::PrintStack() {
    for (int i = top; i >= 0; i--)
    {
        cout << items[i] << ", ";
    }
    cout << endl;
}

// Print function that prints the entire size.
void stack::PrintSize() {
    cout << top + 1 << endl;
}

// Empty the stack
void stack::makeEmpty() {
    top = -1;
}




