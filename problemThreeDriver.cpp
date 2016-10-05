//
//  CS 241
//  Fall 2015
//  PA 2
//  15 October 2015
//  problemThreeDriver.cpp
//  Programming Assignment Two Problem Three
//  Nate McCain
//
//  Created by Nate McCain on 10/8/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    // The stuff that holds brings in the user's input and gives it to the array.
    char character;
    int wordStore = 0;
    bool found = false;
    // Initialize the character array and the variables that check for the palindrome.
    char word[40];
    int please;
    int moveRight;
    // Initialize the variables that work inside the double for loop.
    bool palindrome = true;
    char front;
    char back;
    // The variables that do the number work for the array.
    int start;
    int rear = 0;
    
    // Ask the user for the string.
    cout << "Enter a string; press return." << endl;
    cin.get(character);
    
    // Put the user's phrase into a character array for storage.
    while (character != '\n')
    {
        word[wordStore] = character;
        wordStore++;
        cin.get(character);
    }
    
    // This one moves from the left and waits for the right position to meet it
    // if a palindrome is not found.
    for (moveRight = 0; moveRight < wordStore - 1 && found == false; moveRight++)
    {
        // This one moves from the right and meets the position to the left.
        for (please = wordStore - 1; please > moveRight && found == false; please--)
        {
            // Begin the process of checking for a palindrome
            start = moveRight;
            rear = please;
            palindrome = true;
            // While we have a palindrome and the two checking points have not met each
            // other, continue doing this while loop.
            while (palindrome == true && start < rear)
            {
                front = word[start];
                back = word[rear];
                // If they are equal, the word still has a chance of being a palindrome.
                if (front == back)
                {
                    palindrome = true;
                }
                // Not a palindrome.
                else
                {
                    palindrome = false;
                }
                start++;
                rear--;
                
            }
            // If the word is a palindrome, found is true and we break from the loops.
            if (palindrome == true)
            {
                found = true;
                break;
            }
            
        }
        // If it is found, we really need to break from the for loop.
        if (found == true)
        {
            break;
        }
    }
    // We found a palindrome!!!!
    if (found == true)
    {
        cout << "The phrase entered is a palindrome. It has a length of " << (please - moveRight + 1) << " letters." << endl
             << "The palindrome phrase is: " << endl;
        for (int i = moveRight; i <= please; i++)
        {
            cout << word[i];
        }
        cout << endl;
    }
    // It is not a palindrome...
    else
    {
        cout << "The phrase is not a palindrome." << endl;
    }
    
    // Goodbye.
    return 0;
}
