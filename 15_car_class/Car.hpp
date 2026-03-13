#include <string>
#include <iostream>

#ifndef CAR_HPP
#define CAR_HPP

class Car {
public:
// no argument constructor
    Car() ;
    // get methods
    //std::string getMake();
    //std::string getModel();
    //int getYear();
   // double getMPG();

    //TODO constructor with arguments
    Car(const std::string& make_, const std::string& model_, int year_, double MPG_);

    // set methods
    void setMake(const std::string& make_);
    void setModel(const std::string& model_);
    void setYear(int year_);
    void setMPG(double MPG_);
    
    //class methods
    void print_Info() {
        std::cout << "Make: " << getMake() << std::endl;
        std::cout << "Model: " << getModel() << std::endl;
        std::cout << "Year: " << getYear() << std::endl;
        std::cout << "MPG: " << getMPG() << std::endl;
    }
    
private:
    std::string make;
    std::string model;
    int year;
    double MPG; // miles per gallon
};

Car::Car() {
    set Make("...");
    set Model("...");
    set Year(1900);
    set MPG(0);

}

std::string Car::getMake() {
    return make;
}
std::string Car::getModel() {
    return model;
}
int Car::getYear() {
    return year;
}
double Car::getMPG() {
    return MPG;
}

void Car::setMake(const std::string& make_){
    if (!make_.empty()) {
    make = make_;
    }
}

void Car::setModel(const std::string& model_){
    if (!model_.empty()) {
        model = model_;
    }
}

void Car::setYear(int year_){
    year = (year_ > 1900) ? year_ : 1900;
}
    
void Car::setMPG(double MPG_){
    MPG = (MPG_ > 0) ? MPG_ : 0;
}

void Car::print_info() {
    std::cout << make << std::endl;
    std::cout << model << std::endl;
    std::cout << year << std::endl;
    std::cout << MPG << std::endl;

};

#endif

/*
 TODO
    mileage: cars mileage
    fuel capacity: how much fuel the car can hold
    fuel level: how much fuel is currently in the car (in gallons)

    void refuel(double gallons);
    void drive(double miles);


*/