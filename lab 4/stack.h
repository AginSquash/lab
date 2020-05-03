//
// Created by Vlad Vrublevsky on 03.05.2020.
//

#ifndef LABA8_STACK_H
#define LABA8_STACK_H

#include <iostream>
#include <cstdlib>

#include "OOP/DT.h"

#define SIZE 10

#import "OOP/DT.h"

class stack {
public:
    stack();

    ~stack();

    void push(const DateTime &dt);

    void pop(DateTime &out);

    DateTime pop();

    bool is_empty() const;

    int size = 0;

private:
    class Node {
    public:
        Node(const DateTime &dt, Node *c);
        DateTime contain;
        Node *next;
    };

    Node *peak;
};

#endif //LABA8_STACK_H
