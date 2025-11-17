#include <iostream>
#include <string>
#include <iomanip>

//prototype
void printLecture(const struct Lecture& lecture);
struct Lecture createLecture(std::string title, std::string author, int duration);

struct Lecture{
    std::string title;
    int duration;
    std::string author;
};

int main(void){

    struct Lecture oop=createLecture("Structures", "Adam", 50);
//call a fun
printLecture(oop);

    return 0;
}

void printLecture(const struct Lecture& lecture){
    //access the properties
std::cout<< std::setw(15)<< std::left << "Title: "<< lecture.title << std::endl;
std::cout<< std::setw(15)<< std::left <<"Duration: "<< lecture.duration/60<< " minutes"<<std::endl;
}

struct Lecture createLecture(std::string title, std::string author, int duration){
    //create lecture object
struct Lecture oop;

//modify the properties
oop.title = "Structures.";
oop.author = author;
oop.duration = 50*60;

return oop;
}