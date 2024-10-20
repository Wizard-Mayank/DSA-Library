#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include<stdexcept>
#include<iostream>

class DynamicArray{
private:
    int *arr;
    int size;
    int capacity;

    void resize();

public:
    DynamicArray();
    ~DynamicArray();

    void push(int element);
    int get(int index) const;
    void remove(int index);
    int getSize() const;
    int getCapacity() const;
    void print() const;
};

#endif