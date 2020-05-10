//
// Created by Vlad Vrublevsky on 03.05.2020.
//
#include "stack.h"
using namespace std;

stack::stack()
{
    peak = NULL;
}

stack::~stack()
{
    while(!is_empty())
        pop();
}

bool stack::is_empty() const
{
    return peak == NULL;
}

stack::Node::Node(const DateTime& dt, Node* node) : next(node)
{
    contain = dt;
}

void stack::push(const DateTime& dt)
{
    peak = new Node(dt, peak);
    size++;
}

DateTime stack::pop()
{
    size--;
    peak = node.next;
    return node.contain;
}

void stack::pop(DateTime& dt)
{
    dt = peak->contain;
    Node* node = peak;
    peak = peak->next;
    size--;
    delete node;
}