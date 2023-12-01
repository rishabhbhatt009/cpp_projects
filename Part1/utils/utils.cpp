# include <iostream>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <limits>
# include "utils.hpp"

using namespace std; 

namespace utility_func {

    // We add function definitions over here : 

    int hello() {
        std::cout << "Hello World" << std::endl; 
        return 0;
    }

    void swap() {
        int a = 0; 
        int b = 0; 
        cout << "Enter two values : ";
        cin >> a >> b;
        cout << "(a,b) = (" << a << ", " << b << ")" << endl;  
        int temp = a; 
        a = b; 
        b = temp; 
        cout << "(a,b) = (" << a << ", " << b << ")" << endl;  
    }

    void math_operations(int a, int b) {
        int c = a % b;
        int gap = 5;
        cout << left
            << setw(gap) << a 
            << setw(gap) << "%" 
            << setw(gap) << b 
            << setw(gap) << "=" 
            << setw(gap) << c 
            << endl;
    }

    void get_rand(int min, int max){
        srand(time(0)); // generate different seed every time 
        cout << ((rand()%(max-min)) + min) << endl; 
    }

    void overflow(){
        cout << "size of int : " << sizeof(int) << endl;
        cout << "size of long : " << sizeof(long) << endl;
        cout << "size of long long : " << sizeof(long long) << endl;
        cout << "size of double : " << sizeof(double) << endl;
        cout << "int : "
            << numeric_limits<int>::max()
            << " to " 
            << numeric_limits<int>::min() << endl; 
        int num = numeric_limits<int>::max();
        cout << num+1 << ", " << num+2 << endl;
    }

    string get_name(){
        string full_name; 
        cout << "Enter full name : ";
        getline(cin, full_name);
        return full_name;
    }

    void print_tri(){
        int count;
        cout << "Enter number of lines : ";
        cin >> count ;
        for (int i=0; i<count; i++){
            for (int j=0; j<=i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

}