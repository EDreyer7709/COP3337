#include "MyVector.hpp"
#include "MyVector.cpp" //for template class

int main(void){
    MyVector<int> mv;
    mv.push_back(100);
    mv.push_front(1);

    mv.print();
    MyVector<std::string> mvs;
    mvs.push_back("hello");
    mvs.push_back("man");

    mvs.print();

    return 0;
}