# include "shapes.hpp"
# include <iostream>

using namespace std;

// Getters
int Rectangle::getArea() const {
    return this->width * this->height; 
}

int Rectangle::getPerimeter() const {
    return this->height*2 + this->width*2 ; 
}

int Rectangle::getHeight() const {
    return this->height;
}

int Rectangle::getWidth() const {
    return this->width;
}

// Setters
void Rectangle::setHeight(int height){
    if (height < 1){
        throw invalid_argument("height");
    }
    else 
        this->height = height;
}

void Rectangle::setWidth(int width){
    if (width < 1){
        throw invalid_argument("width");
    }
    else 
        this->width = width;
}

// Constructors
Rectangle::Rectangle(const string& color, int height, int width) : Shape(color) {
    cout << "Initializing a Rectangle(" << height << "," << width << ")" << endl;
    setHeight(height);
    setWidth(width);
}

Rectangle::Rectangle(const Rectangle& source) : Shape(source.getBackground()){
    this->height = source.height;
    this->width = source.width;
    cout << "Copied Rectangle" << endl;
}

// Destructor 
Rectangle::~Rectangle(){
    cout << "Destroying " << this->getBackground() << " Rectangle" << endl;
} 

void Rectangle::draw() const {
    cout << "Drawing Rectangle" << endl;
}