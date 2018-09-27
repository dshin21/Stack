//
// Created by danie on 2018-09-27.
//

#ifndef STACK_STACK_HPP
#define STACK_STACK_HPP


class Stack {
private:
    static constexpr auto MAX_SIZE = 10;
    int stack[MAX_SIZE]{};
    int topOfStack;

    bool push();
    void pop();
    int top() const;
    bool empty();
    bool full();
    void print();

public:
    Stack():topOfStack{-1}{}



};


#endif //STACK_STACK_HPP
