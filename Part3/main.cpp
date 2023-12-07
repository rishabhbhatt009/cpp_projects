#include "utils/rectangle.hpp"
#include "utils/SmartPointer.hpp"
#include "utils/length.hpp"
#include <iostream>

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

    Rectangle rectangle3{7,7}; // curly initializer
    print_info(rectangle3);

    Rectangle copy = rectangle2;
    print_info(copy);

    cout << "# of objects = " << Rectangle::getObjectCount() << endl;
}

void smart_ptr(){
    SmartPointer ptr{new int};
    *ptr = 100;
    cout << *ptr << endl;
}

void operator_overloading(){
       // Operator Overloading 
    // Length first{10};
    // Length second{20};
    Length first, second; 
    cout << "Enter len1 : " ; 
    cin >> first; 
    cout << "Enter len2 : " ; 
    cin >> second; 
    
    if (first == second)
        cout << first << "=" << second << endl; 
    else
        cout << first << "!=" << second << endl;

    cout << "SUM = " << (first+second) << endl; 

    // unary operator overload 
    // increment
    Length x{10} ; 
    Length y = (x++)++ ;
    Length z = ++x ;

    cout << &++x << endl 
        << &x << endl 
        << &y << endl
        << &z << endl;

    // indirection 
    smart_ptr();

    // type conversion 
    // int val = first ; // implicit 
    int val = static_cast<int>(first) ; // explicit 
    cout << val << endl;
}

int main(){

    // understanding_classes();
    // operator_overloading();

    
    return 0; 
} 