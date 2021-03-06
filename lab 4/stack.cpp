//
// Created by Vlad Vrublevsky on 03.05.2020.
//
#include "stack.h"
using namespace std;

#define SIZE 10

stack::stack(int size) {
    arr = new DateTime[size];
    top = -1;
    capacity = size;
}

void stack::push(DateTime dt)
{
    if (top + 1 == capacity)
    {
        exit(EXIT_FAILURE);
    }

    arr[++top] = dt;
}

DateTime stack::pop()
{
    if (isEmpty())
    {
        exit(EXIT_FAILURE);
    }

    return arr[top--];
}

DateTime stack::peek(int i) const
{
    if (isEmpty())
    {
        exit(EXIT_FAILURE);
    }

    return arr[top-i];
}

bool stack::isEmpty() const
{
    return top == -1;
}

int stack::size() const
{
    return top + 1;
}

stack::~stack()
{
    while (!isEmpty()) {
        pop();
    }
}
