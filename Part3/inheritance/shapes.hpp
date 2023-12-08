// header guard
#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <string>

using namespace std; 

class Shape {
public :
    // Shape()=default;
    Shape(const string& color); // Constructor
    virtual ~Shape(); // Destructor 
    string getBackground() const; // Getter 
    // static int getObjectCount() ;
    void setBackground (string color); // Setter 
    virtual void draw() const; 
private : 
    string background ; 
    // static int objectCount;
};

class Rectangle : public Shape {
public: 
    // Constructor 
    // Rectangle()=default;
    // Destructor 
    Rectangle(const string& color, int height, int width); 
    Rectangle(const Rectangle& source);
    ~Rectangle();
    // Getter
    int getArea() const;
    int getPerimeter() const;
    int getWidth() const; 
    int getHeight() const;
    // Setter
    void setWidth(int val);
    void setHeight(int val); 
    void draw() const override;
private:
    int width=0;
    int height=0; 
};

class Circle : public Shape {
public: 
    // Constructor 
    // Circle()=default;
    Circle(const string& color, int radius);
    Circle(const Circle& source); 
    // Destructor 
    ~Circle();
    // Getter
    double getArea() const;
    double getPerimeter() const;
    double getRadius() const; 
    // Setter
    void setRadius(int val);
    void draw() const override;
private:
    int radius=0;
    const double PI = 3.14; 
};

#endif