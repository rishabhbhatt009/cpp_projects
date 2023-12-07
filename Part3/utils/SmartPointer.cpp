#include <iostream>
#include "SmartPointer.hpp"

using namespace std; 

SmartPointer::SmartPointer() : ptr{nullptr}{
    cout << "Pointer created" << endl;
}

SmartPointer::SmartPointer(int* ptr) : ptr{ptr}{
    cout << "Pointer created" << endl;
    // this->ptr = ptr;
}

SmartPointer::~SmartPointer(){
    delete this->ptr; 
    this->ptr = nullptr;
}

int &SmartPointer::operator*(){
    return *(this->ptr);
}
