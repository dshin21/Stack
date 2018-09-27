//
// Created by danie on 2018-09-27.
//

#ifndef STACK_STACK_HPP
#define STACK_STACK_HPP

#include <array>
#include <iostream>

class Stack {
private:
    static constexpr auto MAX_SIZE = 10;
    std::array< int, MAX_SIZE > *stack;
    int topOfStack;

    bool push( int data );

    void pop();

    int top() const;

    bool empty();

    bool full();



public:
    Stack();
    void print();

};


#endif //STACK_STACK_HPP
