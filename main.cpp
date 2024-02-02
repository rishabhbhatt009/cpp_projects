#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std; 

int main(){
    vector<int> vec(10);
    cout << "Array Created" << endl ; 
    cout << "Vec Size : " << vec.size() << endl; 
    cout << "Vec Max Size : " << vec.max_size() << endl; 
    cout << "Vec cap : " << vec.capacity() << endl; 

    for (auto& x:vec){
        cout << x << " ";
    }
    cout << endl; 


    fill(vec.begin(), vec.end(), 10);

    for (auto& x:vec){
        cout << x << " ";
    }
    cout << endl ; 
}