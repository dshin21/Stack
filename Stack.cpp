//
// Created by danie on 2018-09-27.
//

#include "Stack.hpp"

Stack::Stack() : topOfStack{ -1 } {
    for ( int &i : *stack )
        i = -1;
}

bool Stack::push( int data ) {

    return false;
}

void Stack::pop() {

}

int Stack::top() const {
    return 0;
}

bool Stack::empty() {
    return false;
}

bool Stack::full() {
    return false;
}

void Stack::print() {
    for ( int i = 0; i < stack->size(); ++i )
        std::cout << "Element at index: " << i << " is " << stack->at( i ) << std::endl;
}



