#include "Car.hpp"
#include "CarDEaler.hpp"
#include <iostream>

bool isEfficient(const Car& car) {
    return car.getMPG() > 25.0;
}


int main(void) {
    // create an object of Car class
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2025);
    ferrari.setMPG(13.5);

    Car ferrari_superGT("Ferrari", "Super GT", 2021,10.7);
    Car ferrari_spider("Ferrari", "Spider", 2020, 11.7);

    ferrari.print_Info();
    ferrari_superGT.print_Info();
    ferrari_spider.print_Info();


    //create CarDealer
    CarDealer lakeland_ferrari
    lakeland_ferrari.addCar(ferrari);
    lakeland_ferrari.addCar(ferrari_superGT);
    lakeland_ferrari.addCar(ferrari_spider);

    lakeland_ferrari.showInventory();

    std:: cout << isEfficient(ferrari_spider) << std::endl;
    return 0;
}

bool isEfficient(const Car& car) {
    return car.getMPG() > 20.0 ? true : false;
}