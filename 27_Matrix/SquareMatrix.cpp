#include "SquareMatrix.hpp"

template <typename T>
SquareMatrix<T>::SquareMatrix (int n) : Matrix<T> (n,n){}

template <typename T>
SquareMatrix<T> SquareMatrix<T>::load(const char *filename){

}

template <typename T>
SquareMatrix<T> SquareMatrix<T>::operator=(const SquareMatrix<T>& m){
    if (this->data){
        for (int i=0; i<rows; i++){
            delete data[i];
        }
        delete this-> data;
    }
}