//testing file
# include "Car.hpp"
# include "CarDealer.hpp"
# include <iostream>

/*
    TODO
    Add:
    mileage: the odometer of the car
    fule_capacity: tank capacity of the car
    fuel_level: current fuel in gallons

    methods
    void refuel(double gallons);
    void drive(double distance); if car has enough fuel to drive the given distance print <Car (make, model) is driving!>
    
    */

    //returns true if given car is efficient
    bool isEfficient(const Car& car);

    int numberOfInefficientCars(const CarDealer&);


int main(void){
    //create a car object
    Car ferrari_spider("Ferrari", "Spider", 2021, 16.4);
    Car ferrari_superGT("Ferrari", "SuperGT", 2025, 23.4);
    ferrari_spider.print();

    Car ferrari_f50;
    ferrari_f50.setMake("Ferrari");
    ferrari_f50.setModel("F 50");
    ferrari_f50.setYear(2025);
    ferrari_f50.setMPG(10.5);
    ferrari_f50.print();

    //check whether the car if efficicent
    std::cout<<'\n' << (isEfficient(ferrari_f50) ? "Efficient" : "Inefficient") << '\n'<< '\n';
    std::cout<<'\n' << (isEfficient(ferrari_superGT) ? "Efficient" : "Inefficient") << '\n'<< '\n';

    //create a CarDealer object
    CarDealer ferrari_lakeland;
    ferrari_lakeland.addCar(ferrari_f50);
    ferrari_lakeland.addCar(ferrari_spider);
    ferrari_lakeland.addCar(ferrari_superGT);

    ferrari_lakeland.showInventory();
    //print dealer's inefficinet cars
    std::cout<<numberOfInefficientCars(ferrari_lakeland);





    return 0;
}


//function implementation
bool isEfficient(const Car& car){
    return (car.getMPG()>20.0) ? true : false;
}

int numberOfInefficientCars(const CarDealer& car_dealer){
    int n_cars= 0;
    for (Car& car : car_dealer.getInventory()){
        if (!isEfficient(car)){
            n_cars++;
        }
    }
    return n_cars;
}