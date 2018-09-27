//
// Created by danie on 2018-09-27.
//

#include "Stack.hpp"

Stack::Stack() : topIndex{ -1 } {
    for ( int &i : *stack )
        i = -1;
}

bool Stack::push( int data ) {
    for ( int &i : *stack )
        if ( i == -1 ) {
            i = data;
            topIndex++;
            return true;
        }
    return false;
}

void Stack::pop() {
    topIndex--;
}

int Stack::top() const {
    return stack->at( topIndex );
}

bool Stack::empty() {
    return topIndex == -1;
}

bool Stack::full() {
    return topIndex == MAX_SIZE -1;
}

void Stack::print() {
    for ( int i = 0; i < stack->size(); ++i )
        std::cout << "Element at index: " << i << " is " << stack->at( i ) << std::endl;
}



