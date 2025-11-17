#include <iostream>

//TODO
//reload function for weapon and for all derived classes
//create an invertory for the player (set of weapons)



class Weapon{ //abstract class (1 pure virtual) cannot make an object of this class
public:
    virtual void use(void)= 0; //pure virtual function
};


class Gun : public Weapon {
    public:
    void use(void) override{
        std::cout << "BANG!"<<std::endl;
    }
};

class MachineGun : public Gun {
    public:
    int magazine=20;
    void use(void) override {
        while (magazine-->0){
        std::cout<< "BANG!";
        }
        std::cout << '\n';
        magazine=20;
    }
    
};

class Bazooka : public Weapon {
public:
    void use(void) override{
        std::cout<< "BOOM!"<<std::endl;
    }
};

class Knife : public Weapon {
    void use(void) override{
        std::cout<< "SLASH!"<<std::endl;
    }
};

class Player{
public:
    void use_weapon(Weapon& weapon){
        weapon.use();
    }
};


int main (void){
    Gun gun;
    MachineGun mg;
    Bazooka bazooka;
    Knife knife;

    gun.use();
    //mg.shoot();

    //create a reference to a base class
    Gun& weapon= mg;
    weapon.use();

    std::cout<< "------------------\n";
    Player player;
    player.use_weapon(knife);

    return 0;
}