#include "Car.hpp"
#include <vector>

#ifndef CARDEALER_HPP
#define CARDEALER_HPP

class CarDealer {
public:
    void showInventory() const; // print all cars
    void addCar(Car& car); // add a car to inventory
    


private:
    std::vector<Car> inventory;

};

#endif