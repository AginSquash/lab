#include <iostream>
#include "Figures.h"
#include <vector>

int test1() {
    Parallelepiped p1 (2, 2, 2);
    Sphere s1(16);
    Tetrahedron t1(12);
    Parallelepiped p2(12, 4, 8);
    Sphere s2(81);
    Tetrahedron t2(31);
    Parallelepiped p3(8, 8, 12);
    Sphere s3(55);
    Tetrahedron t3(39);
    Parallelepiped p4(5, 1, 2);

    Figure* figures[10] =  { &p1, &s1, &t1, &p2, &s2, &t2, &p3, &s3, &t3, &p4 };
    for (int i = 0; i < 10; i++) {
        std::cout << figures[i]->getType() << " square: " << figures[i]->getSquare() << std::endl;
    }
    return 0;
}
int test2() {
    std::vector<std::unique_ptr<Figure>> figures;
    figures.push_back(std::make_unique<Parallelepiped>(2, 2, 2));
    figures.push_back(std::make_unique<Parallelepiped>(12, 36, 8));
    figures.push_back(std::make_unique<Parallelepiped>(8, 17, 34));

    figures.push_back(std::make_unique<Sphere>(5));
    figures.push_back(std::make_unique<Sphere>(32));
    figures.push_back(std::make_unique<Sphere>(64));
    figures.push_back(std::make_unique<Sphere>(12));

    figures.push_back(std::make_unique<Tetrahedron>(15));
    figures.push_back(std::make_unique<Tetrahedron>(54));
    figures.push_back(std::make_unique<Tetrahedron>(23));

    for (auto& figure: figures)  {
        std::cout << figure->getType() << " square: " << figure->getSquare() << std::endl;
    }
}

int main() {
    test1();

    return 0;
}