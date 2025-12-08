#include "Matrix.hpp"
#include "Matrix.cpp"
#include "SquareMatrix.hpp"
#include "SquareMatrix.cpp"


int main(){
    Matrix<std::string> m;

    m=m.load("data.txt");
    m.print();

    SquareMatrix<double> sm;

    sm=sm.load("data2.txt");
    sm.print();
    return 0;
}