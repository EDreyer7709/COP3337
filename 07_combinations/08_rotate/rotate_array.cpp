#include <iostream>

void rotateLeft (const int src[], int dest[], int size, int k){
    int prefixLength= k%size;

    for (int i=0; i<size-prefixLength; i++){
        dest[i]=src[prefixLength+i];
    }

    for (int i=0; i< prefixLength;i++){
        dest[size-prefixLength+i]=src[i];
    }
}

int main (void){
    const int SIZE=7;

    int list[SIZE]= {1,2,3,4,5,6,7};
    int newList[SIZE];
    rotateLeft(list,newList, SIZE, 1);

    //print
    for (int i :newList ) {
        std::cout <<i << ' ';
    }
}