# include "rectangle.hpp"
# include <iostream>

using namespace std;

int Rectangle::objectCount = 0;

void Rectangle::draw() const{
    cout << "Drawing a rectangle" << endl;
    // cout << "Dimensions: (" << this->height << " x " << this->width << ")";
    // we dont have to use this 
    cout << "Dimensions: (" << height << " x " << width << ")" << endl;
    for (int i=0; i<height+2; i++){
        for (int j=0; j<width+2; j++){
            if ((i==0) && !(j==0 || j==width+1))
                cout << "_";
            else if (!(i==0 || i==height+1) && (j==0 || j==width+1))
                cout << "|";
            else if ((i==height+1) && (j==0 || j==width+1))
                cout << "|";
            else if ((i==height+1) && !(j==0 || j==width+1))
                cout << "_";
            else 
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int Rectangle::getArea() const {
    return this->width * this->height; 
}

int Rectangle::getPerimeter() const {
    return this->height*2 + this->width*2 ; 
}

// Getters
int Rectangle::getHeight() const {
    return this->height;
}

int Rectangle::getWidth() const {
    return this->width;
}

int Rectangle::getObjectCount() {
    return objectCount;
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

Rectangle::Rectangle(){
    objectCount++; 
    cout << "Creating a Rectangle" << endl ; 
}

Rectangle::Rectangle(int height, int width)
{
    objectCount++; 
    cout << "Initializing a Rectangle(" << height << "," << width << ")" << endl;
    setHeight(height);
    setWidth(width);
}

Rectangle::Rectangle(const Rectangle& source){
    objectCount++; 
    cout << "Rectangle copied ..." << endl;
    this->height = source.height; 
    this->width = source.width; 
}
