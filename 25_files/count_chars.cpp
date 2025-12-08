#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){

    //for (int i=0; i<argc; i++){
    //    std::cout<< argv[i]<<std::endl;
   // }

    if(argc !=2){
        std::cout<<"Usage: "<< argv[0]<<"<file_name>\n";
        return 1;
    }

    std::string file_name(argv[1]);
    std::ifstream in;
    //open the file
    in.open(file_name);

    //check if file exists
    if(in.fail()){
        std::cout<< file_name<<" could not be opened\n";
        return 1; //Error
    }

    char ch;
    int count_chars=0;
    while(!in.eof()){
        ch=in.get(); //getting one character from a file
        if(ch != ' ' && ch!= '\n' && !-EOF){
            count_chars++;
        }
    }
    std::cout<< file_name<< " has "<< count_chars << " characters\n";

    //TODO
    //count the number of lines in the file
    

    in.close();

    return 0;
}