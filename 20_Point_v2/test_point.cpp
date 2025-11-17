#include <iostream>
#include "Point.hpp"

int sum_coordinates(){
    Point p(3,5,"p");
    return p.x + p.y;
}

int main(void){
    //test unary operator
    Point p1(3,4, "p1");
    std::cout  << p1.toString()<<std::endl;

    Point p2=-p1;
    std::cout<<p2.toString()<<std::endl;

    //test ++
    ++p2;
    p2++;
    std::cout<<p2.toString()<<std::endl;

    Point p3(0,0,"p3");

    p3=p1;

    std::cout <<p3.toString()<<std::endl;

    //test firned function
    std::cout<<sum_coordinates()<< std::endl;

    //test << operator
    std::cout<< p2<<" "<<p3 << std::endl;

    return 0;
}