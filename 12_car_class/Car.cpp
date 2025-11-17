//implementation of a car class
#include "Car.hpp"
#include <iostream>


//no-arg constructor
Car::Car(){
    setMake("Unknown");
    setModel("Unknown");
    setYear(1900);
    setMPG(0.0);
}

Car::Car(std::string make, std::string model, int year, double MPG){
    setMake("Unknown");
    setModel("Unknown");
    setYear(1900);
    setMPG(0.0);
}

//setters
void Car::setMake(std::string newMake){
    if (!newMake.empty()){
        make=newMake;
    }
}
void Car::setModel (std::string newModel){
        if (!newModel.empty()){
        make=newModel;
    }
}
void Car::setYear (int newYear){
    year=(newYear >= 1900 && newYear <= 2025) ? newYear : 1900;
}
void Car::setMPG (double newMPG){
    MPG = (newMPG >0) ? newMPG : 0;
}

//getters
std::string Car::getMake() const {return make;}
std::string Car::getModel() const {return model;}
int Car::getYear() const {return year;}
double Car::getMPG() const {return MPG;}
double Car::getMileage() const {return mileage;}
double Car::getFuelCapacity() const {return fuelCapacity;}
double Car::getFuelLevel() const {return fuelLevel;}

//print
void Car::print(void) const{
    std::cout << getMake()<< std::endl;
    std::cout << getModel()<< std::endl;
    std::cout << getYear()<< std::endl;
    std::cout << getMPG()<< std::endl;
    std::cout << getMileage()<< std::endl;
    std::cout<< getFuelCapacity()<< std::endl;
    std::cout<< getFuelLevel()<< std::endl;
}

void Car::refuel(double gallons){
    fuelLevel += gallons;
    if (fuelLevel > fuelCapacity){
        fuelLevel = fuelCapacity;
    }
    std::cout << "Refueled " << gallons << " gallons. Current fuel level: " << fuelLevel << " gallons." << std::endl;
}

void Car::drive(double distance){
    double possibleDistance = fuelLevel * MPG;
    if (possibleDistance >= distance){
        mileage += distance;
        fuelLevel -= distance / MPG;
        std::cout << "Car " << make << " " << model << " is driving!" << std::endl;
    } else {
        std::cout << "Not enough fuel to drive the requested distance." << std::endl;
    }
}