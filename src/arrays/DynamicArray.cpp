#include <stdexcept>
#include <iostream>
using namespace std;

class DynamicArray{
private:
    int *arr;
    int size;
    int capacity;

    void resize(){
        capacity *= 2;
        int *newArr = new int[capacity];

        for(int i=0; i<size; ++i){
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
    }
public:
    DynamicArray(){
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }

    void push(int element){
        if (size == capacity)
            resize();

        arr[size++] = element;
    }

    int get(int index) const noexcept(false){
        if (index<0 || index>=size){
            throw out_of_range("Index out of bounds!");
        }

        return arr[index];        
    }

    void remove(int index) noexcept(false){
        if (index<0 || index>=size){
            throw out_of_range("Index out of bounds!");
        }

        for(int i=index; i<size-1; ++i){
            arr[i] = arr[i+1];
        }

        size--;
    }

    int getSize() const{
        return size;
    }

    int getCapacity() const{
        return capacity;
    }

    void print() const{
        for(int i=0; i<size; ++i){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }

    ~DynamicArray(){
        delete[] arr;
    }
};