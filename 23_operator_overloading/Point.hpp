#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point {  
public:
    Point(int x =0, int y =0) ;

    // relational operator
    bool operator == (const Point& other);
    bool operator != (const Point& other);

    // arithmetic operator
    Point operator + (const Point& other);
    Point operator - (const Point& other); // to do
    Point operator * (const Point& other); // to do4

    // arithmetic assignment operator
    Point& operator += (const Point& other);
    Point& operator -= (const Point& other); // to do
    Point& operator *= (const Point& other); // to do


    // unary operator
    Point operator - () const; // to do

    // operator []
    int operator [] (int index);
    
    std::string toString() const;

    // preincrement 
    Point& operator ++ (); 
    
    // postincrement
    Point operator ++ (int);

private:
    int x, y;

};

#endif