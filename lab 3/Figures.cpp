//
// Created by Vlad Vrublevsky on 25.04.2020.
//

#include "Figures.h"
#include <math.h>

#define PI 3.14159265

double Parallelepiped::getSquare() {
    return 2 * (edgeA*edgeB + edgeB*edgeC + edgeA*edgeC);
}

std::string Parallelepiped::getType() {
    return "Parallelepiped";
}


double Tetrahedron::getSquare() {
    return sqrt(3) * edge * edge;
}

std::string Tetrahedron::getType() {
    return "Tetrahedron";
}


double Sphere::getSquare() {
    return 4 * PI * radius * radius;
}
std::string Sphere::getType() {
    return "Sphere";
}