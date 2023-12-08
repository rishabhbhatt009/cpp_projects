#include "shapes.hpp"
#include <iostream>
#include <string>

static int objectCount = 0;

// Getter 
string Shape::getBackground() const {
    return this->background;
}

// Setter
void Shape::setBackground(string color){
    this->background=color;
}

// Constructor 
Shape::Shape(const string& color){
    cout << "Initializing shape" << endl; 
    background = color;
}

// Destructor 
Shape::~Shape(){
    cout << "Destroying " << background << " Shape" << endl;
}

void Shape::draw() const {
    cout << "Drawing Shape" << endl;
}