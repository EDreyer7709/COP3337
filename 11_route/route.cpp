#include <iostream>
#include <ctime>
#include <string>

//create a route structure
class Route {
private: //access specifier
    std::string source;
    std::string destination;
    int length;

    void updateLength(void){
        length = (source.empty() || destination.empty() ? 0 : rand() % 900 + 75);
    }
public:
    //contructors
    //constructors have no return type
    //constructors are called when the object is created
    //constructors should be public
    //constructors cannot be called explicitely
    
    //no argument constructor (first version)
    //Route(){
    //     length=0;
    //}

    //no argument constructor (second version)
    Route() : length(0) {
        
    }

    //overloaded constructor
    Route(std::string source_, std::string destination_);

    //get functions (getters/accessor functions)
    std::string getSource(void){
        return source;
    }
    std::string getDestination(void){
        return destination;
    }
    int getlength(void){
        return length;
    }


    //set functions (mutator functions/setters)
    void setSource(std::string new_source){
        source = new_source;
        updateLength();
    }

    void setDestination (std::string new_destination){
        destination= new_destination;
        updateLength();
    }
    void print(void){
        std::cout<<source<< " -> "<< destination << " : " << length <<std::endl;
    }

    //returns whether the route is long or not
    bool isLong();

};

int main(void){
    srand(time(0)); //set the seed of random number
    //create an object of route
    Route fall_trip;
    fall_trip.print();

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();

    fall_trip.setDestination("New York");
    fall_trip.print();

    //create Route object with constructor with argument
    Route christmas_trip("Orlando", "Los Angeles");

    christmas_trip.print();


    //creating objects
    Route route1; //no argument constructor
    Route route2("A", "B"); //constructor with arguments
    Route route3= Route(); //no argument constructor
    Route route4= Route("C", "D"); //constructor with arguments

    //Route route5(); //NOT AN OBJECT. Function prototype.
    std::cout<< route4.isLong()<< std::endl;

    return 0;
}

//method implementation
bool Route::isLong(){
    return getlength()>300;
}

  Route::Route(std::string source_, std::string destination_){
        setSource(source_);
        setDestination(destination_);
    }