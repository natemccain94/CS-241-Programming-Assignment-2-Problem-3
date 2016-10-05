//
//  Stack.h
//  Programming Assignment 2 Problem 3
//
//  Created by Nate McCain on 10/10/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

static const int MAX_ITEMS = 101;
// Exception class used by Push when stack is full.
class FullStack{};

// Exception class used by Pop and Top when stack is empty.
class EmptyStack{};


// The stack class
class stack {
    
public:
    // Constructors- Default, Single, and Copy
    stack();
    stack(char item);
    stack(stack const & stack);
    // The copy constructor goes here.
    
    // Stack functions
    bool IsEmpty() const;
    bool IsFull() const;
    void Push(char item);
    void Pop();
    char Top() const;
    void makeEmpty();
    
    // Print function
    void PrintStack();
    void PrintSize();
    
    
    
private:
    int top;
    int originalTop;
    int items[MAX_ITEMS];
    
};



















#endif /* Stack_h */
