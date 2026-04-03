#include "Point.hpp"
#include <iostream>

int main(void) {
    // create a point
    Point p1(3,4);
    Point p2(5,4);
    Point p3(50,70);

//     // i want to compare 2 points
//     if (p1 != p2) {
//         std::cout << (char) p3[0];

//     } else {
//         std::cout << (char) p3[1];
//     }

//     p1[0] = 52;
//     std::cout << (char) p1[0];
//     std::cout << "Y5B";

    Point p4 = p1 + p2;

    std::cout <<  p4.toString() << std::endl;

    p4 += p3;
    std::cout <<  p4.toString() << std::endl;

    int x += 1;
    (x += 2) += 5;
    std:: cout << x << std::endl;

    Point p5 = -p4;
    std::cout <<  p5.toString() << std::endl;

    // test preincrement
    ++p5;
    std::cout <<  p5.toString() << std::endl;




    
    return 0;
}


