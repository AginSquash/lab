//
// Created by Vlad Vrublevsky on 25.04.2020.
//

#ifndef LABA3_FIGURES_H
#define LABA3_FIGURES_H

#include <string>

class Figure {
public:
    virtual double getSquare() = 0;
    virtual std::string getType() =0;
};


class Parallelepiped: public Figure
{
private:
    double edgeA;
    double edgeB;
    double edgeC;

public:
    Parallelepiped(double a, double b, double c) : edgeA(a), edgeB(b), edgeC(c)
    { }
    virtual std::string getType();
    virtual double getSquare();
};


class Tetrahedron: public Figure
{
private:
    double edge;

public:
    Tetrahedron(double edge) : edge(edge)
    { }
    virtual std::string getType();
    virtual double getSquare();
};



class Sphere: public Figure
{
private:
    double radius;

public:
    Sphere(double r) : radius(r)
    { }
    virtual std::string getType();
    virtual double getSquare();
};

#endif //LABA3_FIGURES_H
