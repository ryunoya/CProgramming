#include "CarDEaler.hpp"

void CarDealer::addCar(Car& car) {
    inventory.push_back(car);
}

void CarDealer::showInventory() {
    for (int i = 0; i < inventory.size(); ++i) {
        inventory[i].print_info();

    }
}