#include "rectangle.hpp"
#include <iostream>
#include "SmartPointer.hpp"

using namespace std;

void print_info(const Rectangle& rectangle){
    // rectangle.draw();
    cout << "Address : " << &rectangle << endl;
    cout << "Area : " << rectangle.getArea() << endl;
    cout << "Perimeter : " << rectangle.getPerimeter() << endl;
}

void understanding_classes(){
    Rectangle rectangle1 ; 
    // // only if parameters are public 
    // rectangle.height = 5; 
    // rectangle.width = 10;
    // // using setters for private attributes 
    rectangle1.setHeight(5);
    // rectangle.setHeight(-1);
    rectangle1.setWidth(10); 
    print_info(rectangle1);

    Rectangle rectangle2(3,23); 
    print_info(rectangle2);

    Rectangle copy = rectangle2;
    print_info(copy);

    cout << "# of objects = " << Rectangle::getObjectCount() << endl;

}

int main(){
    understanding_classes();
    return 0; 
}