//
// Created by danie on 2018-09-27.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file

#include "catch.hpp"
#include "Stack.hpp"

TEST_CASE( "A new stack is empty" ) {
    Stack stack;
    REQUIRE( stack.empty());
    REQUIRE( !stack.full());
}

TEST_CASE( "push(): pushing element when empty" ) {
    Stack stack;
    stack.push( 1 );
    REQUIRE( stack.top() == 0 );
}

TEST_CASE( "push(): pushing element when full" ) {
    Stack stack;
    stack.push( 1 );
    stack.push( 2 );
    stack.push( 3 );
    stack.push( 4 );
    stack.push( 5 );
    stack.push( 6 );
    stack.push( 7 );
    stack.push( 8 );
    stack.push( 9 );
    stack.push( 10 );
    REQUIRE_THROWS( stack.push( 333 ));
}

TEST_CASE( "pop(): when the stack is empty" ) {
    Stack stack;
    REQUIRE_THROWS( stack.pop());
}

TEST_CASE( "pop(): when the stack is not empty" ) {
    Stack stack;
    stack.push( 1 );
    stack.pop();
    REQUIRE( stack.empty());
}

TEST_CASE( "top(): when there no top element" ) {
    Stack stack;
    REQUIRE_THROWS(stack.top());
}

TEST_CASE( "top(): when there is a top element" ) {
    Stack stack;
    stack.push(1);
    REQUIRE(stack.top() == 0);
}

TEST_CASE("empty(): when the stack is empty"){
    Stack stack;
    REQUIRE(stack.empty());
}

TEST_CASE("empty(): when the stack is not empty"){
    Stack stack;
    stack.push(1);
    REQUIRE(!stack.empty());
}

TEST_CASE("full(): when the stack is full"){
    Stack stack;
    stack.push( 1 );
    stack.push( 2 );
    stack.push( 3 );
    stack.push( 4 );
    stack.push( 5 );
    stack.push( 6 );
    stack.push( 7 );
    stack.push( 8 );
    stack.push( 9 );
    stack.push( 10 );
    REQUIRE(stack.full());
}

TEST_CASE("full(): when the stack is not full"){
    Stack stack;
    REQUIRE(!stack.full());
}