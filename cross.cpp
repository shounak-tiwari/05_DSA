In **C programming**, **data types** specify the type of data that a variable can store. The data type determines the size and type of data that can be held, as well as the operations that can be performed on the data.

Here’s an overview of **C data types**:

### 1. **Basic Data Types**
   These are the core data types in C that represent simple values.

| Data Type | Description                               | Size (in bytes) | Range (for `int` type, varies by system)   |
|-----------|-------------------------------------------|-----------------|-------------------------------------------|
| `int`     | Represents integers (whole numbers).      | 4               | -2,147,483,648 to 2,147,483,647           |
| `char`    | Represents a single character.            | 1               | -128 to 127 (signed), 0 to 255 (unsigned) |
| `float`   | Represents single-precision floating-point numbers. | 4         | ±3.4e-38 to ±3.4e+38                     |
| `double`  | Represents double-precision floating-point numbers. | 8         | ±1.7e-308 to ±1.7e+308                   |
| `void`    | Used to indicate no data type, often used for functions that do not return a value. | -  | -                                         |

### 2. **Modifiers to Basic Data Types**
   Modifiers can be used to change the size or range of the basic data types.

| Data Type    | Description                                     | Size (in bytes)  | Range                                        |
|--------------|-------------------------------------------------|------------------|----------------------------------------------|
| `short`      | Represents a short integer.                     | 2                | -32,768 to 32,767                            |
| `long`       | Represents a long integer.                      | 4 or 8           | -2,147,483,648 to 2,147,483,647 (varies)     |
| `long long`  | Represents a long long integer (extended range). | 8                | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `signed`     | Specifies a signed data type (can represent both positive and negative values). | -                | (varies by the data type)                   |
| `unsigned`   | Specifies an unsigned data type (can only represent non-negative values). | -                | 0 to (maximum value for the data type)       |

### 3. **Derived Data Types**
   Derived data types are built from basic data types, and can hold multiple values or pointers to other variables.

| Data Type        | Description                                           |
|------------------|-------------------------------------------------------|
| `array`          | A collection of variables of the same data type.      |
| `pointer`        | A variable that stores the address of another variable. |
| `struct`         | A structure is a user-defined data type that groups related variables of different types. |
| `union`          | A union is a user-defined data type where all members share the same memory space. |
| `enum`           | An enumeration is a user-defined data type that consists of a set of named integer constants. |

### 4. **Detailed Explanation of Data Types**

- **`int`**:
   - Represents integer values (e.g., 10, -100, 0).
   - It is the most commonly used data type for numbers without decimals.

- **`char`**:
   - Represents a single character, typically a letter or symbol (e.g., 'A', '1', '$').
   - The `char` data type is actually an integer type, typically storing 1 byte, but it is used to store characters.

- **`float`**:
   - Represents numbers with decimals (e.g., 3.14, -0.0001).
   - It provides single precision, meaning it stores fewer decimal places than `double`.
   - Usually has a precision of 6 decimal places.

- **`double`**:
   - Represents numbers with decimals but with double precision (more decimal places than `float`).
   - Typically provides 15 decimal places of precision.

- **`void`**:
   - This type indicates that a function does not return a value.
   - It can also be used for pointers (`void*`) to indicate a generic pointer type.

#### **Modifiers**:

- **`short`**: 
   - Reduces the size of `int` to 2 bytes.
   - Useful for memory-constrained systems when working with integers.

- **`long`**:
   - Increases the size of `int` to 4 or 8 bytes depending on the platform, thus allowing larger integer values.

- **`long long`**:
   - Extends the range of integers further beyond the limits of `long`.

- **`signed` and `unsigned`**:
   - **`signed`** allows both positive and negative numbers.
   - **`unsigned`** allows only non-negative numbers (useful when you need to store large positive numbers like file sizes).

#### **Derived Data Types**:

- **Arrays**:
   - Arrays store a collection of values of the same type.
   - Example: `int arr[10];` (an array of 10 integers).

- **Pointers**:
   - A pointer stores the memory address of another variable.
   - Example: `int* ptr;` (pointer to an integer).

- **Structures**:
   - Structures allow grouping of different data types under one name.
   - Example:
     ```c
     struct Person {
         char name[50];
         int age;
     };
     ```
     This defines a `Person` structure with a `name` and `age`.

- **Unions**:
   - Unions allow storing different types of data in the same memory location, but only one member can hold a value at a time.
   - Example:
     ```c
     union Data {
         int i;
         float f;
         char c;
     };
     ```
     Here, `Data` can store an integer, a float, or a character, but not more than one at a time.

- **Enumerations (Enums)**:
   - An enumeration is a way to define variables that can only have one of a set of predefined constants.
   - Example:
     ```c
     enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
     ```
     The above `enum` assigns integer values to days of the week starting from 0.

### Summary Table:

| Data Type       | Size (Bytes) | Description                                |
|-----------------|--------------|--------------------------------------------|
| `int`           | 4            | Integer type.                              |
| `char`          | 1            | Character type.                            |
| `float`         | 4            | Single-precision floating-point type.      |
| `double`        | 8            | Double-precision floating-point type.      |
| `void`          | -            | Used for functions that don’t return a value. |
| `short`         | 2            | Short integer.                             |
| `long`          | 4 or 8       | Long integer.                              |
| `long long`     | 8            | Long long integer.                         |
| `unsigned`      | -            | Non-negative values only (used with `int`, `char`, etc.). |
| `signed`        | -            | Signed values (positive and negative).     |
| `struct`        | Varies       | User-defined data type to group variables. |
| `union`         | Varies       | User-defined data type sharing memory space. |
| `enum`          | 4            | User-defined constants for integer values. |

These are the essential **C data types** you’ll encounter while programming in C. They allow you to choose the most efficient way to represent and store data depending on your program's needs.