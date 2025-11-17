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
public: 
    Knife(bool stainless=false) : is_stainless(stainless){}
    void use(void) override{
        std::cout<< "SLASH!"<<std::endl;
    }
    bool get_isStainless(void) const{
        return is_stainless;
    }

private:
    bool is_stainless;
};

class Player{
public:
    void use_weapon(Weapon& weapon){
        //dynamic casting
        Knife * knife = dynamic_cast<Knife*>(&weapon); //casting of a parent address to child pointer
        if (knife != NULL){
            if (knife->get_isStainless()){
                std::cout<< "Stainless knife. Can use it."<<std::endl;
                weapon.use();
            }
            else {
                std::cout<< "Cannot use not stainless knife."<<std::endl;
            }
        }
        else{
            std::cout<<"Not a knife."<<std::endl;
            weapon.use();
        }
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