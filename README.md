# cpp_projects

---
## Part 1 : Basics 

- C++ Basic Syntax
- C++ Standard Library : Data Structures (list, map), Algorithms (searching, sorting)
- Statically Typed language 
- How do we compile and run C++ code ? 
	- `C++ Code` -> `Machine Code` (OS Specific) by a compiler
	- compile code : `g++ hello_world.cpp -o hello_world`
    - run executable : `./hello_world`
- How does this process differ from python ? 
    - C++ is compiled language while Python is an interpreted language 

---

- Variables 
    - declare type + initialize : `int a = 0;`
    - Uninitialized variables contain garbage values. Unlike JAVA and C# which initialize variable at declaration
    - Constants : Variables you can't change `const double pi = 3.14;`
    - Naming Conventions : 
        - Snake Case : `file_size`
        - Pascal Case : `FileSize` (class)
        - Camel Case : `fileSize` (variables and constants)
        - Hungarian Notation : `iFileSize` = type + Pascal Case
        - choose your own but stick to a convention

- Data Types :
    - TYPE          | BYTES  | RANGE |
      ---           | ---    | ---   |
      bool          | 1byte  | 
      char          | 1byte  | 
      short         | 2bytes | 
      int           | 4bytes | 
      long          | 4bytes | 
      long long     | 8bytes | 
      double        | 8bytes |  
      long double   | 8bytes | 
    - `0.8` = Double and `0.8f / 0.8F` = float
    - `auto` as data type to automatically pick data type
    - grace initialization using `int number {}`, initializes and prevents implicit conversion
    - `unsigned` -> no -ve values, large +ve value if a -ve value stored  
    - `std::sizeof(int)` : size of data type 
    - `numeric_limits<int>::max()/min()` : limits of data types 
    - Overflow : when the val is too big for the data type it wraps around to its min
    - String :
        - `char name = 'R'` // characters written in single quotation mark 
        - `string name = "Rishabh"`
        - `std::getline(cin, full_name)` to read string with space
    - Arrays : 
        - Declare an array of 10 integers : `int arr[10];` (init to 0 by default)
        - Declare and init an array : `int arr[10] = {1,2,3,4,5}` // arr = [1,2,3,4,5,0,0,0,0,0]
        - No `ArrayIndexOutOfBound` error returns garbage value 

- Number Systems :
    - decimal (base 10) : `255`, 
    - binary (base 2) : `0b11111111`, 
    - hexadecimal (base 16) : `0xFF`

- Type Conversion 
    - Implicit and Explicit type conversion 
    - Implicit : Compiler automatically converts the value
        - Widening Conversion : `int -> double`, usually safe 
        - Narrowing Conversion : `double -> int`, may lead to data loss 
        - When? Assignment/Initialization (data type), Math/Comparison(higher ranked type)
    - Explicit : Explicit type conversion (type casting) using casting operators
        - C type casting : `(int) 0.8` (catches error at run time)
        - C++ type casting : `static_cast<int>(y)` (catches error at compile time)


- Math Operators : `+ - * / %`
    - In operations with different types, compiler implicitly converts to higher ranked type
    - `%` is truncated and is only for `int` type
    - `Increment (++)` and `Decrement (--)` operators in `postfix` and `prefix` forms 
    ```
    10%3=1
    -10%3=-1
    10%-3=1
    -10%-3=-1
    ```

- Generating random numbers 

- Output formatter using stream manipulator (`iomanip`)

- Directive : 
    - Start with `#` and instructs the preprocessor to perform specific actions before the actual compilation of the code begins
    - Include directive : 
        - `# include` used to include the contents of a file in the source file. 
        - Commonly used to include header files, which contain declarations of functions and macros
        - Example `# include <iostream>`
    - Define Directive : 
        - `# define` used to define macros (fragment of code which has been given a name). 
        - Example `# define PI 3.14`
    - Conditional Compilation Directives 
        - `#ifdef, #ifndef, #if, #endif, #else, #elif`
        - Example `#ifdef DEBUG`: includes the following block of code only if DEBUG is defined


- Control Flow : 
    - Comparison Operators 
    - Logical Operators : 
        - and (`&&`) : evaluation stops at first false 
        - or (`||`) : evaluation stops at first or
        - not (`!`) 
        - Order : () -> not -> and -> or
    - If Statement : 
    ```
    if (condition){...} 
    else if (condition){...} 
    else{...}
    ```
    - Condition/Ternary Operator : `int var = (condition) ? THEN : ELSE;` 
    - Switch Statement : 
        - `break` to prevent fall through 
    ```
    switch (): 
        case 1 : {
            ...
            break;
        } 
        case 2 : {...}
        default : {...}
    ```

- Loop : 
    - `for (init; condition; increment) {...}` 
    - Looping over a array/string : `for (int num : numbers) {...}` -> `for num in numbers : {...}`
    - `while (condition) {...}`
    - `do {...} while (condition)`
    - control flow : `break` and `continue`

- Scope of a variables :
    - Local and Global Variables : 
        - Local Variable : variable is only accessible in the block in which it is declared
        - Global Variable : accessible globally (all functions) 

- Functions : 
    - Function Definition (defining a function): `return_type func_name(parameters){...}`
    - Function Prototype (declaring a function) : `int func(int var);` 
    - Default values to parameters : 
        - `int total(int a = 10, int b = 10) {return a+b;}`
        - vars default values should come after vars with no default value 
    - Signature of a function : name + # and type of parameters
    - Overload Functions : 
        - same name but different signature (type / # of parameters)
    - Pass arguments by value and reference : 
        - Call by value : `int func(int var)` 
        - Call by reference : definition changes -> `void func(int& var)` / use pointers
        
- Organizing Functions in files : 
    - Implementation File (`utils.cpp`) with Function Definitions 
    - Header File (`utils.hpp`) with Function Declarations and imported using include directive 
    - Header Guards to prevent multiple inclusions
    - Note : Compile both `main.cpp` & `func.cpp`, 2 ways to compile all files : 
        - by adding them in `g++` one by one, 
        - using a `makefile`

- Standard Template Library
    - we use the `include` directive to add functions
    - `using namespace std` : adds all fnuction in `std` to namespace
    - `using std::cout` : adds `std::cout` to namespace
    - `# include <iostream>` : for IO streams 
        - Standard output stream : `std::cout` 
            - Stream insertion operator : `<<`
            - Endline : `std:endl`
        - Standard input stream : `std:cin`
            - Stream extraction operator : `>>`
    - `# include <cmath>` : for math functions 
        - Useful functions : `pow`, `ceil`, `floor` 
    - `# include <cstdlib>` : c std library
        - `rand()` to get random number (gives same result for every run)
        - `srand(int)` to set seed value 
    - `# include <ctime>`
        - `time(0)` : current time in sec from `Jan 1 1970`
    - `# include <iomanip>` : for IO stream manipulation 
        - `setw(int)` : reserve characters
        - `left`, `right` : align string (sticky manipulator), no center manipulator 
        - `fixed` : fix number of digits after decimal 
        - `setprecision()` : for number of digits after decimal 
        - `boolalpha`/`noboolalpha` : prints alpha for bool
    - `# include <limits>`
        - `numeric_limits<>::min()`/`numeric_limits<>::max()`
    - `# include <memory>` : for smart pointers
    - `# include <string>` : for strings  
    - `# include <cstring>` : for `cstrings`  

----

## Part 2 : Intermediate 
- Arrays :
    - Creating and initializing : 
        - `int arr[5];` // arr has garbage values 
        - `int arr[5] = {1,2,3};` // arr = [1,2,3,0,0]
        - `int arr[] = {1,2,3};` // arr = [1,2,3]
        - `int arr [5][5];`
        - `int arr [5][5] = {{...},{...},{...},{...},{...}};`
    - `arr` = pointer which stores the address of the start of the array
    - len(arr) = `sizeof(arr) / sizeof(arr[0])` = `std::size(arr)`
    - Passing array to a function : 
        - In C++, when you pass an array to a function, what you're actually doing is passing a pointer to the first element of the array. This is known as "array decaying."
        - passed by reference : an array pointer (which only contains address) 
        - pointer can not be looped over and doesn't have size of array
        - therefore we always pass `size` as well 
        - function declaration : 
            - `void func(int arr[], int size){...}`
            - `void func(int* arr, int size){...}`
        - function invocation : `func(arr)`
        - 2D array : To modify the function to accept a 2D array, you need to specify the size of at least one of the dimensions of the array in the function parameters. This is because when arrays are passed to functions, they decay into pointers, and the size information of the array is lost. For a 2D array, you need to provide the size of the second dimension to correctly calculate the memory layout.      
    - Returning array from a function : 
        - return a pointer to the array 
        - function definition : `int* calc(int arr[]) { ...; return arr; }`
    - Unpacking array (Structured binding) : `auto [x,y,z] = arr;`

- `sizeof()` return `size_t` which is a datatype ~ largest datatype in size

- Pointers 
    - `nullptr` = null pointer 
    - `&` : `address of` operator when `&a`, gives the address of a variable
    - `int* ptr = &var` : we have an int pointer which stores the address of int var
    - Indirection / de-referencing Operator : `ptr = address`, to access the value stored in the address we de-reference the pointer `*ptr`
    - Constant pointer : 
        - `int* ptr` : normal pointer 
        - `const int* ptr` : pointer to a const integer
        - `int* const ptr` : constant pointer to an integer 
        - `const int* const ptr` : constant pointer to a constant integer 
    - Passing pointers to and from functions :
        - you can call by reference using : 
            - pointers (`void func(int* var){...}`), you need to send address (&var) and dereference before using 
            - reference (`void func(int& var){...}`)
        - `int* func()` : returning an int pointer 
    - Pointer Arithmetic 
    - Dynamic Memory Allocation 
        - normal memory allocation : 
            - in Stack (garbage collection)
            - `int arr[10]` has fixed # of elements 
        - dynamic memory allocation : 
            - in Heap (we have to clean up)
            - `int* ptr = new int[10];` allocate memory 
            - `delete[] ptr` : de-allocate memory 
            - to extend an array : create array -> if capacity full -> create new array -> copy values from old array -> delete old array -> reassign variable
            - however this is implemented in std library : `vectors`
    - What are Memory Leaks : when our program consumes more and more memory without de-allocating unused memory
    - Smart Pointers :
        - `include <memory>`
        - internally uses pointers array but adds functionality and abstracts complexity
        - Unique Pointers :
            - inbuilt de-allocation functionality  
            - the pointer owns the memory location 
            - `unique_ptr<int> x(new int);`
            - `unique_ptr<int> y = make_unique<int>();`
            - `auto z = make_unique<int>()`
            - `auto arr = make_unique<int[]>(10)`
        - Shared Pointers :
            - two pointers can point to the same memory location 
            - inbuilt de-allocation functionality
            - `shared_ptr<int> x(new int);`
            - `shared_ptr<int> y = make_shared<int>();`
            - `auto z = make_shared<int>()`
            - `shared_ptr<int>(x)` // points to the same location as x 
        - `unique_ptr` does not have an overloaded `cout <<` (shared_ptr does)
        - initialized to default of the data type 
        - `ptr.get()` : to get the address the ptr points to 

- Reference :
    - A reference in C++ is an alias for another variable
    - `&` : `reference` operator when `int&`, declares a reference to int type
    - References and pointers in C++ are both used to refer to other variables, 
    - key differences in how they are used and behave : 
        - Definition and Initialization: It must be initialized when it is declared and cannot be null, `int a = 10; int& ref = a`
        - Indirection: References do not need an indirection operator (*) to access the value they refer to, `ref = 10; // Modifies a to 10`
        - Reassignment : Once a reference is bound to a variable, it cannot be made to refer to another variable. The binding is permanent for the lifetime of the reference
        - Nullability : cannot be null, must always refer to a valid object or variable
    - Constant reference : 
        - `int& ref` : normal reference to an int (can modify the original var)
        - `const int& ref` : constant reference to an int (can not modify the original var)

- Strings
    - C strings : 
        - `# include <cstring>`
        - C style strings = array of characters terminated by `\0` (null terminator)
        - We use functions to perform even basic operations : `strlen`, `strcpy`, `strcmp` 
        - Limitations : 
            - Operators have not been overloaded cannot directly be used to perform operations 
            - may face memory issues due to fixed size
    - C++ string : 
        - `# include <string>`
        - internally uses character array but adds functionality and abstracts complexity
        - Directly do basic operations like copy, compare and concat using operators
        - Funcs : `length()`, `starts_with()`, `ends_with()`, `empty()`, `front()`, `back()`
        - Modifying : `append()`, `insert()`, `erase()`, `clear()`, `replace()`
        - Searching : `find()`, `rfind()`, `find_first_of()`, `find_last_of()`
        - Substrings : `substr()`
        - Working with characters : `isalpha()`, `isdigit()`, `toupper()`
        - String to numeric conv : `stoi`=string to int, `stod`=string to double
        - Number to string : `to_string()` 
        - Escape Sequence : 
            - newline : `\n`
            - tab : `\t`
            - backslash : `\\`
            - quote : `\"`
        - Raw String : `R"()"`

- Concept : Underflow and overflow of values in variables  

- Structures : 
    - custom data type / abstract data type (ADT) 
    - Defining structures : `struct name {...;};` //can add default values for members
    - Declaring : `name var;`
    - Initializing : `name var = {1, "Rishabh"}` // values in order
    - unpakcing : `auto [a,b] = var`
    - array of structures : `name arr[N];`
    - Nesting structures
    - Comparing Structures (using `if` without overloading)
    - Member Functions : structure can also have member functions called methods
    - Operator overloading :
        - `bool operator==(const Movie& movie) const {...}` // inside the struct definition 
        - `bool operator==(const Movie& movie1, const Movie& movie2) const {...}` // outside the struct definition (preferred method)
    - Passing objects to and from functions : 
        - `void func(name& var)` / `void func(const name& var)`
        - `void func(name* var)`  
            - dereference `(*var).name` before use, `()` as `.` has higher precedence than `*`
            - alt = structure pointer operator : `var->name`
        - `name& func()` / `name* func()`

- Enumerations :
    - classic enum : `enums name {var=1 ..., ...};`
    - using enum : `name::var`
    - enums can have name collisions if same names are used
    - strongly typed enum : `enums class name {..., ..., ...};`
    - classic enums are implicitly converted to `int`, strongly typed enums have to explicitly converted to `int` before use 

- Streams :
    - stream is an abstraction for a data source or destination. 
    - Using streams, we can read/write data to a variety of places (eg terminal, files, network, etc) in the same way
    - `ios` : input output stream (base class), `ostream`, `istream` 
    - buffer : temp storage, `cin` reads data from buffer
        - `ignore()` : remove characters from buffer 
        - `clear()` : clear state
    - handling errors :
        - ask for input -> `if fail()` -> `clear` state -> `ignore` buffer -> ask for input
    - File Stream :
        - File stream classes : `ifstream`, `ofstream`, `fstream` (both)
        - writing to a file : 
            - open -> check `file.is_open()` -> write (`<<`/`write()`)
        - read from a file : 
            - open -> check `file.is_open()` -> read (`>>`/`getline()`) till `!file.eof()`
            - `>>` : reads till white space / EOL
            - `getline()` : reads till EOL / specified delimiter
        - read/write from/to a binary file (images, audio files, PDFs) :
            - `.bin`, `.dat`
            - `file.open(name, mode=ios::out | ios::binary)` // combining mode
            - `file.write()`
            - `file.read()`  
        - `\n` vs `endl` : `endl` flushes the buffer while `\n` doesn't. Therefore if are looping through a write we would want to only flush it once at the end instead of every time (with `endl`). Therefore `\n` is preferred for performance.
        - modes (combine using `|`) : `ios::in` | `ios::out` | `ios::app` | `ios::binary`
    
    - String Stream
        - `istringstream`, `ostringstream`, `stringstream` all included in `stream`
        - why is it useful ? 
            - Conversion to string : we can control who we covert (example precision of double)
            - Parsing String : to split string 

        ```c++
        std::vector<std::string> split(const std::string &s, char delimiter) {
            std::vector<std::string> tokens;
            std::string token;
            std::istringstream tokenStream(s);

            while (std::getline(tokenStream, token, delimiter)) {
                tokens.push_back(token);
            }

            return tokens;
        }
        ```






---

## Part 3 : Advance