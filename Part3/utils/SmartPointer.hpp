#ifndef SMART_POINTER
#define SMART_POINTER

using namespace std; 

class SmartPointer {
public: 
    // Constructor
    SmartPointer(); // Default Constructor 
    explicit SmartPointer(int* val); // Constructor 
    ~SmartPointer();
    int& operator*();
private: 
    int* ptr; 
};

#endif

