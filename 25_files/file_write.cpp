#include <iostream>
#include <fstream>
#include <iomanip>

int main(void){
    std::ofstream out;
    std::cout<<"Enter a file name: ";
    std::string file_name;
    std::cin>> file_name;

    //open the file
    out.open(file_name);

    //writing into a file
    out << "Hello"<<std::endl;
    out<< "MDRM8"<<std::endl;

    for(int i=1; i<=100; i++){
        out<<std::setw(5)<<i;
        if(i%10==0){
            out<<'\n';
        }
    }


    //close the file
    out.close();

    return 0;
}