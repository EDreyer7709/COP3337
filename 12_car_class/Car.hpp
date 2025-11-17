//header file (.hpp, .h)
// description of the class

#ifndef CAR_H
#define CAR_H
#include <string>
class Car {
    public:
        //constructor
        Car(); //no-arg
        Car(std::string make, std::string model, int year, double MPG);

        //getters
        //constant method - cannot modify class properties
        std::string getMake() const;
        std::string getModel() const;
        int getYear() const;
        double getMPG() const;
        double getMileage() const;
        double getFuelCapacity() const;
        double getFuelLevel() const;

        //setters

        void setMake(std::string newMake);
        void setModel (std::string newModel);
        void setYear (int newYear);
        void setMPG (double newMPG);

        //methods
        void print(void) const;
        void refuel(double gallons);
        void drive(double distance);

    private:
        std::string make;
        std::string model;
        int year;
        double MPG;
        double mileage;
        double fuelCapacity;
        double fuelLevel;
};

#endif