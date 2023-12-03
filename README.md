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
        - `char name = "R"`
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
    - `# include <iostream>`
        - Standard output stream : `std::cout` 
            - Stream insertion operator : `<<`
            - Endline : `std:endl`
        - Standard input stream : `std:cin`
            - Stream extraction operator : `>>`
    - `# include <cmath>`
        - Useful functions : `pow`, `ceil`, `floor` 
    - `# include <cstdlib>`
        - `rand()` to get random number (gives same result for every run)
        - `srand(int)` to set seed value 
    - `# include <ctime>`
        - `time(0)` : current time in sec from `Jan 1 1970`
    - `# include <iomanip>`
        - `setw(int)` : reserve characters
        - `left`, `right` : align string (sticky manipulator), no center manipulator 
        - `fixed` : fix number of digits after decimal 
        - `setprecision()` : for number of digits after decimal 
        - `boolalpha`/`noboolalpha` : prints alpha for bool
    - `# include <limits>`
        - `numeric_limits<>::min()`/`numeric_limits<>::max()`

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
    - `&` : `address of` operator, gives the address of a variable
    - `int* ptr = &var` : we have an int pointer which stores the address of int var
    - Indirection / de-referencing Operator : `ptr = address`, to access the value stored in the address we de-reference the pointer `*ptr`
    - Constant pointer : 
        - `int* ptr` : normal pointer 
        - `const int* ptr` : pointer to a const integer
        - `int* const ptr` : constant pointer to an integer 
        - `const int* const ptr` : constant pointer to a constant integer 
    - Passing pointers to function :
        - 
- Strings
- Structures 
- Enumerations 
- Streams 


