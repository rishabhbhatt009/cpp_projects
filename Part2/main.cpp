#include <iostream>

using namespace std;

void pprint(int *arr, int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test(int arr[]){
    arr[0]=100;
}

void un_packing(){
    // Doesn't work on a passed arr pointer 
    int new_arr[] = {1,2,3};
    auto [x,y,z] = new_arr;
    cout << x << ", " << y << ", " << z << endl;
}

void arrays(){
    // Arrays 
    int numbers[5]; // Declaring an array (uninitialized)
    test(numbers);
    pprint(numbers, size(numbers)); // garbage values printed
    // initializing array 
    for (int i=0; i<size(numbers); i++){
        numbers[i]=i+1;
    }
    pprint(numbers, size(numbers)); // initialized values printed 
    un_packing();
}

int main(){
    cout << "Hello World ..." << endl;
    // arrays(); 
    
    // Pointers 
    int a = 10;
    const int* const ptr = &a;
    cout << ptr << ", " << *ptr << endl;
    return 0;
}