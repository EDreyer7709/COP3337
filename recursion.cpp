#include <iostream>

void test(int n);
int main(void){
    test (100);
    return 0;
}


//recursive funtion

void test(int n) {
    //the base case
    if (n<=0){
        return;
    }
    std::cout<<n<< std::endl;
    test(n-1);
}