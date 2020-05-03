//
// Created by Vlad Vrublevsky on 03.05.2020.
//

#ifndef LABA8_STACK_H
#define LABA8_STACK_H

#include <iostream>
#include <cstdlib>

#include "OOP/DT.h"

#define SIZE 10

class stack
{
private:
    DateTime *arr;
    int capacity;
    int top;

public:
    stack(int size = SIZE);

    void push(DateTime);
    DateTime pop();

    int size();
    bool isEmpty();

    ~stack();
};

#endif //LABA8_STACK_H
