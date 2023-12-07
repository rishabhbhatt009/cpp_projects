// header guard
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public: 
    // Rectangle() = default; // Default Constructor
    Rectangle();
    Rectangle(int height, int width); // Constructor 
    Rectangle(const Rectangle& rectangle); // Copy Constructor
    // ~Rectangle(); // Destructor 
    
    void draw() const;
    int getArea() const; // const tells the compiler that the function will not modify object
    int getPerimeter() const;
    // Getter or Accessors
    int getWidth() const; 
    int getHeight() const;
    static int getObjectCount() ;
    
    // Setter or Mutator
    void setWidth(int val);
    void setHeight(int val); 

private:
    int width=0;
    int height=0; 
    static int objectCount;
};

#endif