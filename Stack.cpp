//
// Created by danie on 2018-09-27.
//

#include "Stack.hpp"

Stack::Stack() : topIndex{ -1 } {}

bool Stack::push( int data ) {
    if(topIndex < MAX_SIZE){
        topIndex++;
        stack->at(topIndex) = data;
        return true;
    }
    return false;
}

void Stack::pop() {
    stack->at(topIndex) = 0;
    topIndex--;
}

int Stack::top() const {
    return stack->at( topIndex );
}

bool Stack::empty() {
    return topIndex < 0;
}

bool Stack::full() {
    return topIndex == MAX_SIZE -1;
}

void Stack::print() {
    for ( int i = 0; i < stack->size(); ++i )
        std::cout << "Element at index: " << i << " is " << stack->at( i ) << std::endl;
}



