#ifndef MYCEVTOR_HPP
#define MYVECTOR_HPP

template <typename T>
class MyVector{
public:
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector<T>& other);
    int getCapacity() const {return capacity;}
    void push_back(const T& value);
    void print();
    T pop_back(void);

    T& at(int index);
    void clear();
    int getSize();
    void push_front(const T& void)
    void insert(int pos, T value);


private:
    void allocate_memory(int memory_size);
    int *elements;
    int size;
    int capacity;
};


#endif