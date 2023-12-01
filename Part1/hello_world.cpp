# include <iostream>
# include "./utils/utils.hpp"

using namespace std;
// using namespace utility_func; // might add conflict 

/* ---------------------------------------------
Cpp Basics 
--------------------------------------------- */
int main() {
    utility_func::hello();
    // utility_func::swap(); 
    utility_func::math_operations(-10,-3); // -1
    utility_func::get_rand(4,10);
    utility_func::overflow();
    string name = utility_func::get_name();
    cout << "Hi " << name << endl; 
    utility_func::print_tri();
    return 0;
}