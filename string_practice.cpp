#include <iostream>
#include <string>

int main(){
    std::string s0("W");
    std::string s1= "F";
    std::string s2= s0 + s1;
    s2 += 'N';
    s2 += (s1 < s2) ? s0 : s1 ;

    return 0;
}