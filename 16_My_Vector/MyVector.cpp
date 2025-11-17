#include "MyVector.hpp"
#include <iostream>

template <typename T>
//implement constructor
MyVector<T>::MyVector(int capacity) : size(0){
    this-> capacity = capacity;
    elements= new T [capacity];
}

template <typename T>
MyVector<T>::~MyVector() {
    delete [] elements;
}

template <typename T>
MyVector<T>::MyVector(const MyVector& other){
    //TODO 1
    size=other.size;
    capacity= other.capacity;
    elements= new T [other.capacity];

    for (int i =0 ; i<size; i++){
        elements[i]=other.elements[i];
    }
}

template <typename T>
void MyVector<T>::push_back(const T& value){
    //TODO 2 (Finish it!)
    
    if (size >= capacity){
        allocate_memory(capacity*2);
        }
    elements[size]= value;
    size++;
}

template <typename T>
T MyVector<T>::pop_back(void){
    if (size>0){
        if (size-1 <capacity/2){
            allocate_memory(capacity/2);
        }
        return elements[--size];

    }
    else {
        //throw an exception
        throw "The vector is empty!";
    }
}

template <typename T>
void MyVector<T>::print() {
    std::cout<< "[ ";
    for (int i=0; i<size; i++){
        std::cout<< elements[i]<<' ';
    }
    std::cout<< "]\n";
} 

template <typename T>
void MyVector<T>::allocate_memory(int memory_size){
    capacity =memory_size;
    int *old = elements;
    //allocate a new memory (bigger or smaller)
    elements= new T [memory_size];
    for (int i=0; i<size; i++){
        elements[i]= old[i];
    }
    //deallocate the old memory
    delete [] old;
}

template <typename T>
T& MyVector<T>::at(int index){
    if (index<0 || index>size-1){
        throw "Invalid index";
    }
    return elements[index];
}

template <typename T>
int MyVector<T>::getSize(){
    return size;
}

template <typename T>
void MyVector<T>::clear(){
    delete [] elements;
    capacity=10;
    size=0;
    elements= new T [capacity];
}

template <typename T>
void MyVector<T>::push_front(const T& value){
    if (size>=capacity){
        allocate_memory(capacity*2);
    }
    for (int i=size; i>0; i--){
        elements [i]=elements[i-1];
    }
    elements[0]=value;
    size++;
}

template <typename T>
void MyVector<T>::insert(int pos, T value){
    if (pos<0){
        pos=size+pos+1;
    }
    if (size>=capacity){
        allocate_memory(capacity*2);
    }
    for (int i= size; i>pos;--i){
        elements[i]=elements[i-1];
    }
    elements[pos]=value;
    size++;
}