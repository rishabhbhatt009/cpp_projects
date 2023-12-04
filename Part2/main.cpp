#include <iostream>
#include <memory>
#include <string>
#include <vector>
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

void pointers(){
    // Pointers 
    int a = 10;
    const int* const ptr = &a;
    cout << ptr << ", " << *ptr << endl;
    
    // Smart pointers 
    auto x = make_unique<int>();
    auto y = make_shared<int>();
    shared_ptr<int> z(y);
    cout << x.get() << " : " << *x << endl;
    cout << y << " : " << *y << endl;
    cout << z << " : " << *z << endl;
}

void strings(){
    // Strings 
    std::string name = "Rishabh"; 
    cout << &name << " : " << name << endl;
    name.append(" Bhatt");
    cout << &name << " : " << name << endl;
    /*
    - &name = address of the std::string object itself, not the address of the internal character array it manages
    - When you append to name using name.append(), 
        - this changes the content of the string, 
        - but not necessarily the address of the std::string object name
        - However, it might change the address of the internal character array managed by the std::string object, 
        - depending on whether the operation causes a reallocation.
    */
}

struct Movie {
    string title; 
    int year;
    double rating;
    // Methods
    bool equals(const Movie& movie){
        return this->title == movie.title;
    }
    // Operator Overloading 
    // 2 const are for movie object and current object
    bool operator==(const Movie& movie) const {
        return this->title == movie.title;
    }
};

// Operator overloading (equality op)
bool operator==(const Movie& movie1, const Movie& movie2) {
    return movie1.title == movie2.title;
}
// Operator overloading (stream insertion op)
ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title 
        << ", Released in " << movie.year 
        << ", Rating : " << movie.rating 
        << endl ; 
    return stream;
}
// Operator overloading (stream extraction op)
istream& operator>>(istream& stream, Movie& movie) {
    // cout << "Title : ";
    // while this can be done it is not ideal to mix I/P and O/P
    // think about file input stream which uses the same function 
    stream >> movie.title >> movie.year >> movie.rating;
    return stream;
}

void structures() {
    // Structures 
    Movie movie1 = {"Avengers", 2012, 10.0};
    cout << movie1.title 
        << ", Released in " << movie1.year 
        << ", Rating : " << movie1.rating 
        << endl ; 
    
    vector<Movie> arr; 
    arr.push_back({"Iron Man 1", 2005, 10.0});
    arr.push_back({"Iron Man 2", 2010, 10.0});
    arr.push_back({"Iron Man 3", 2015, 10.0});

    cout << &arr[0] << endl;
    
    // Copies the object every time (less efficient)
    for (Movie movie : arr) {
        cout << &movie << " : " << movie.title << endl; 
    }
    // Reference to the original object (can be modify values in the object)
    for (Movie& movie : arr) {
        cout << &movie << " : " << movie.title << endl; 
    }
    // Reference to the original object (can not modify values in the object)
    for (const Movie& movie : arr) {
        cout << &movie << " : " << movie.title << endl; 
    }

    cout << arr[0].equals(arr[0]) << endl;
    cout << arr[0] << endl;

    Movie new_movie;
    cin >> new_movie;
    arr.push_back(new_movie);
    cout << arr.back();
}

enum Actions {
    EXIT = 0,
    LIST = 1,
    BUILD = 2 
};

int main(){
    cout << "Hello World ..." << endl;
    // arrays(); 
    // pointers();
    // string(); 
    

    return 0;
}