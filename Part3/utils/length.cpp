#include "length.hpp"
#include <iostream>

using namespace std; 

// Getter 
int Length::get_length() const{
    return this->val;
}

// Setter 
void Length::set_length(int x){
    this->val=x;
}

bool Length::operator==(const Length& second) const{
    return (this->val == second.val);
}

// Operator Overloading 
bool Length::operator==(int val) const{
    return (this->val == val);
}

Length Length::operator+(const Length& obj2) const{
    Length new_obj{(this->val+obj2.val)};
    return new_obj; 
}

Length& Length::operator++(){
    this->val = this->val + 1;
    return *this;
}

Length Length::operator++(int val){
    Length copy = *this; // value at the address stored in this = curr Length obj -> Length copy = curr_obj
    this->val = this->val + 1;
    return copy;
}

Length::operator int() const{
    return this->val;
}

// Constructor 
Length::Length(int x): val(x){
    // cout << "Object Created" << endl;
    // this->val = x;
}


// Non member function 
ostream& operator<<(ostream& stream, const Length& obj){
    stream << "LEN(" << obj.get_length() << ")" ;
    return stream;
}

istream& operator>>(istream& stream, Length& obj){
    int x ;
    stream >> x ;
    obj.set_length(x);
    return stream;
}