# include <iostream>

// Hello world function 
int hello() {
    std::cout << "Hello World" << std::endl; 
    return 0;
}

void swap() {
    int a = 10, b = 20; 
    std::cout << a << ", " << b << "\n";  
    int temp = a; 
    a = b; 
    b = temp; 
    std::cout << a << ", " << b << "\n";  
}

void math_operations(int a, int b) {
    int c = a % b;
    std::cout << a << "%" << b << "=" << c << "\n";
}

int main() {
    double count = 9.99 ; 
    hello();
    swap(); 
    math_operations(-10,-3); // -1
    return 0;
}