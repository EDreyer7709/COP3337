#include <iostream>
#include <string>

class Hello {
public:
    Hello() : messages(nullptr),size(0) {
        std::cout<< "Constructor" << std::endl;
    }
    Hello (int n) : size(n) {
        std::cout<< "Constructor with arguments"<< std::endl;
        //dynamically allocate an array of string
        messages = new std::string [n];
        //initialize an array
        for (int i=0; i<n; i++){
            messages[i]= (i%2==0) ? "Welcome!" : "Not Welcome";
        }
    }

    //copy constructor 
    Hello(const Hello& other){
        std::cout<<"Copy constructor\n";
        //allocate a new array
        //copy the elements from other.messages to messages
    }

    //destructor
    ~Hello(){
        delete [] messages;
    }

    void bye(void){
        std::cout<< "Bye!"<<std::endl;
    }

    void printGreetings() const {
        for (int i=0; i<size; i++){
            std::cout <<messages [i]<<std::endl;
        }
    }

private:
    std::string *messages; //array of strings
    int size; //the size of an array of strings

};

void test (Hello h){
    std::cout<< "Test\n";
}

int main(void){
    //create an object dynamically
    Hello *hi = new Hello;

    //access printGreeting method
    hi->printGreetings();



    //for (int i=0; i<100; i++){
       // Hello (9999999);
   // }

   Hello hi2(100);
   Hello hi3=hi2;
    test(*hi);
    //deallocate the memory
    delete hi;


    return 0;
}