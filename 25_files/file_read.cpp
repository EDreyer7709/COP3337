#include <iostream>
#include <fstream>
#include <iomanip>

int main(void){
    std::ifstream in;
    std::cout<<"Enter a file name: ";
    std::string file_name;
    std::cin>> file_name;

    //open the file
    in.open(file_name);

    //check if file exists
    if(in.fail()){
        std::cout<< file_name<<" could not be opened\n";
        return 1; //Error
    }

    //reading from a file
    std::string first_line;
    std::string second_line;
    
    getline(in,first_line);
    getline(in, second_line);
    
    int sum=0;
    int num;
    while(in >> num){
        std::cout<< num << ' ';
        sum+= num;
    }

    std::cout<< first_line<< " A+code: "<< second_line <<std::endl;
    std::cout<< "Sum: "<< sum <<std::endl;


    


    //close the file
    in.close();

    return 0;
}