#include <iostream>

//abstract class
class Weapon {
public:
    virtual void use() = 0; // abstract function
};


class Gun : public Weapon {
public:
    void use() override {
        shoot();
    }
};


class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {
    }

    void shoot() override{
        if (magazine --) {
            std::cout << "Bang " << std::endl;
            std::cout << '\n';
            magazine = 20; // reload

        }
    }

private:
    int magazine;

};

class Bazooka : public Gun {
public:
    void shoot()  override {
        std::cout << "Boom!" << std::endl;
    }
};  

class Knife : public Weapon {
public:
    void use() override {
        std::cout << "Slash!" << std::endl;
    }
};

class Player {
public:
    void useWeapon(Weapon& weapon) {
        weapon.use();
    }
};

int main (void) {
    Gun gun;
    MachineGun mg;
    Bazooka bz;
    Knife kn;
    mg.shoot(); // call shoot method for machine gun

    std::cout << "Array of Guns:\n";
//create an array of guns
    Gun* guns[2] = {&gun, &mg};


    for (int i = 0; i < 2; i++) {
        guns[i]->use(); // call shoot method for each gun
    }

    std::cout << "Player:\n";
    Player simple;
    simple.useWeapon(gun);
    simple.useWeapon(mg);
    simple.useWeapon(bz);
    simple.useWeapon(kn);


    
    return 0;
}