//
// Created by danie on 2018-09-27.
//

#ifndef STACK_STACK_HPP
#define STACK_STACK_HPP

#include <array>
#include <iostream>
#include <sstream>
#include <string>

class Stack {
private:
    //maximum elements the stack can hold
    static constexpr auto MAX_SIZE = 10;

    //an array of 10 element stack
    int stack[10];

    //index of the top element
    int topIndex;

public:
    /* Constructor*/
    Stack();

    /* Takes the int and stores it on the top of the stack
    *@param - data - integer to store
    *@return - returns true if stored successfully, false otherwise
    */
    bool push( int data );

    /* Removes the int at the stop of the stack
    *@param - n/a
    *@return - void
    */
    void pop();

    /* Returns the top element on the stack
    *@param - n/a
    *@return - returns an integer at the top of the stack
    */
    int top() const;

    /* Checks to see if the stack is empty
    *@param - n/a
    *@return - returns true if the stack is empty, false otherwise
    */
    bool empty();

    /* Checks to see if the stack is full
    *@param - n/a
    *@return - returns true if the stack is full, false otherwise
    */
    bool full();

    /* Prints the elements in the stack to the console
    *@param - n/a
    *@return - void
    */
    std::string print();
};


#endif //STACK_STACK_HPP
