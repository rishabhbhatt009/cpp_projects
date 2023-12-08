#include "shapes.hpp"
#include <iostream>
#include <cmath>

using namespace std; 

// Getter
double Circle::getArea() const {
    return PI*pow(radius,2);
}

double Circle::getPerimeter() const {
    return 2*PI*radius;
}

double Circle::getRadius() const {
    return radius;
} 

// Setter
void Circle::setRadius(int val){
    radius=val;
}

// Constructor
Circle::Circle(const string& color, int radius) : Shape(color) {
    cout << "Initializing a Circle(" << radius << ")" << endl;
    this->radius=radius;
}

Circle::Circle(const Circle& source) : Shape(source.getBackground()) {
    this->radius = source.radius;
    cout << "Copied Circle" << endl;
}

// Destructor 
Circle::~Circle(){
    cout << "Destroying " << this->getBackground() << " Circle" << endl;
}

void Circle::draw() const {
    cout << "Drawing Circle" << endl;
}
