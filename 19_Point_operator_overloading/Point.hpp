#ifndef POINT_H
#define POINT_H
#include <string>

class Point {
    public:
    Point(int x=0, int y=0,const char *tag=nullptr);
    ~Point();
    Point(const Point& other);//copy constructor

    //logic operator
    bool operator==(const Point& other)const;
    bool operator!=(const Point& other)const;

    //arithemetic operator
    Point operator+(const Point& other)const;

    //arithmetic assignment operator
    Point& operator +=(const Point& other);
    Point operator * (const Point& other)const;
    Point& operator *= (const Point& other);

    int& operator[](int index);

    //unary operator
    Point operator-();
    
    //increment
    Point operator++();//pre
    Point operator++(int );

    //TODO decrement



    std::string toString(void) const;


    private:
    int x;
    int y;
    char *tag;
};
#endif