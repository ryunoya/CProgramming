#include "Point.hpp"

Point::Point(int x, int y) {
    this -> x = x;
    this -> y = y;
}

bool Point::operator == (const Point & other){
    return (x == other.x && y == other.y);
}

int& Point::operator [] (int index) {
    return (index == 0) ? x : y;
}

bool Point::operator != (const Point & other){
    return !(*this == other);
}

Point Point::operator + (const Point& other) {
    return Point(x + other.x, y + other.y);
}

std::string Point::toString() {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
};

Point& Point::operator += (const Point& other) {
    *this = *this + other;
    return *this;
}

Point& Point::operator -= (const Point& other) {
    *this = *this - other;
    return *this;
}

Point& Point::operator *= (const Point& other) {
    *this = *this * other;
    return *this;
}

Point Point::operator -() const {
    return Point(-x, -y);
}

Point& Point::operator ++ () {
    x += 1;
    y += 1;
    return *this;
}

Point Point::operator ++ (int) {
    Point temp = *this;
    ++ (* this);
    return temp;
}