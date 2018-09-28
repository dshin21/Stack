//
// Created by danie on 2018-09-27.
//

#include "Stack.hpp"

Stack::Stack() {
    topIndex = -1;
}

bool Stack::push( int data ) {
    if ( topIndex < MAX_SIZE ) {
        topIndex++;
        stack[ topIndex ] = data;
        return true;
    }
    return false;
}

void Stack::pop() {
    if ( topIndex >= 0 ) {
        stack[ topIndex ] = 0;
        topIndex--;
    }
}

int Stack::top() const {
    return stack[ topIndex ];
}

bool Stack::empty() {
    return topIndex < 0;
}

bool Stack::full() {
    return topIndex == MAX_SIZE - 1;
}

std::string Stack::print() {
    std::ostringstream oss;
    for ( int i = 0; i < MAX_SIZE; ++i )
        oss << i << ":" << std::to_string( stack[ i ] ) << " ";
    return oss.str();
}



