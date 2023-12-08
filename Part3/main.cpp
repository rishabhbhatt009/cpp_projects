#include "utils/length.hpp"
// #include "utils/rectangle.hpp"
#include "utils/SmartPointer.hpp"
#include "inheritance/shapes.hpp"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

void print_info(const Rectangle& rectangle){
    // rectangle.draw();
    cout << "Address : " << &rectangle << endl;
    cout << "Area : " << rectangle.getArea() << endl;
    cout << "Perimeter : " << rectangle.getPerimeter() << endl;
}

void understanding_classes(){
    // Rectangle rectangle1 ; 
    // // only if parameters are public 
    // rectangle.height = 5; 
    // rectangle.width = 10;
    // // using setters for private attributes 
    // rectangle1.setHeight(5);
    // rectangle.setHeight(-1);
    // rectangle1.setWidth(10); 
    // print_info(rectangle1);

    // Rectangle rectangle2(3,23); 
    // print_info(rectangle2);

    // Rectangle rectangle3{7,7}; // curly initializer
    // print_info(rectangle3);

    // Rectangle copy = rectangle2;
    // print_info(copy);

    // cout << "# of objects = " << Rectangle::getObjectCount() << endl;
}

void smart_ptr(){
    // SmartPointer ptr{new int};
    // *ptr = 100;
    // cout << *ptr << endl;
}

void operator_overloading(){
    // // Operator Overloading 
    // Length first{10};
    // Length second{20};
    // Length first, second; 
    // cout << "Enter len1 : " ; 
    // cin >> first; 
    // cout << "Enter len2 : " ; 
    // cin >> second; 
    
    // if (first == second)
    //     cout << first << "=" << second << endl; 
    // else
    //     cout << first << "!=" << second << endl;

    // cout << "SUM = " << (first+second) << endl; 

    // // unary operator overload 
    // // increment
    // Length x{10} ; 
    // Length y = (x++)++ ;
    // Length z = ++x ;

    // cout << &++x << endl 
    //     << &x << endl 
    //     << &y << endl
    //     << &z << endl;

    // // indirection 
    // smart_ptr();

    // // type conversion 
    // // int val = first ; // implicit 
    // int val = static_cast<int>(first) ; // explicit 
    // cout << val << endl;
}

void show_shape(Shape& shape){
    shape.draw();
}

int main(){

    // understanding_classes();
    // operator_overloading();

    // Inheritance 
    // Rectangle R1 = Rectangle{10,10};
    // string color = "Red";
    Rectangle R1 = Rectangle{"Red",10,10};
    // Circle C1 = Circle{5};
    Circle C1 = Circle{"Orange",5};
    // R1.setBackground("Red");
    // C1.setBackground("Orange");
    // show_shape(R1); //Up-casting
    // show_shape(C1); //Up-casting

    cout << R1.getBackground() << " Rectangle with area = " << R1.getArea() << endl;
    cout << C1.getBackground() << " Circle with area = " << C1.getArea() << endl;

    // Polymorphic Collection 
    vector<unique_ptr<Shape>> shapes; 
    shapes.push_back(make_unique<Rectangle>(R1));
    shapes.push_back(make_unique<Circle>(C1));
    for (const unique_ptr<Shape>& shape : shapes){
        shape->draw();
    }
    return 0; 
} 