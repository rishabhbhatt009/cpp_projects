# cpp_projects

---
Part 1 
- C++ Syntax
- C++ Standard Library : Data Structures (list, map), Algorithms (searching, sorting)
- How do we compile and run C++ code ? 
	- `C++ Code` -> `Machine Code` (OS Specific) by a compiler
	- compile code : `g++ hello_world.cpp -o hello_world`
    - run executable : `./hello_world`
- How does this process differ from python ? 
    - C++ is compiled language while Python is an interpreted language 
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
- Data Types 
- Type Conversion 
    - Implicit and Explicit type conversion 
    - Implicit : Compiler automatically converts the value
        - Widening Conversion : `int -> double`, usually safe 
        - Narrowing Conversion : `double -> int`, lead to data loss 
        - When? Assignment/Initialization (data type), Math/Comparison(higher ranked type)
    - Explicit : Explicit type conversion (type casting) using casting operators
- Math Operators : `+ - * / %`
    - In operations with different types, compiler implicitly converts to higher ranked type
    - `%` is truncated and is only for `int` type
    - `Increment (++)` and `Decrement (--)` operators in `postfix` and `prefix` forms 

- `iostream`
    - Standard output stream : `std::cout` 
    - Stream insertion operator : `<<`
    - `std:endl`




```
10%3=1
-10%3=-1
10%-3=1
-10%-3=-1
```


    


