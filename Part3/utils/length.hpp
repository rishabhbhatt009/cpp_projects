#ifndef LENGTH_CLASS
#define LENGTH_CLASS
#include <iostream>

using namespace std; 

class Length {
public:
    Length()=default; 
    Length(int val); 
    int get_length() const;
    void set_length(int x);
    
    bool operator==(const Length& obj2) const;
    bool operator==(int val) const;
    Length operator+(const Length& obj2) const; 
    Length& operator++(); //prefix
    Length operator++(int val); //postfix
    operator int() const; 

private: 
    int val; 
};

ostream& operator<<(ostream& stream, const Length& obj); 
istream& operator>>(istream& stream, Length& obj);
#endif