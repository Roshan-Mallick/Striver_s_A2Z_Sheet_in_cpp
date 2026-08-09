# C++ Input and Output --- Striver A2Z Notes

These notes cover the first input/output programs practiced while
following the Striver A2Z C++ roadmap.

------------------------------------------------------------------------

## 1. Output with `cout`

### Concept

`cout` is used to print output to the console.

It belongs to the `iostream` library and the `std` namespace.

``` cpp
#include <iostream>

int main() {
    std::cout << "Hey, Striver!";
    return 0;
}
```

### Important points

-   `#include <iostream>` provides input/output functionality.
-   `std::cout` prints data to the console.
-   `<<` is the insertion operator.
-   `std::` specifies that `cout` belongs to the standard namespace.

------------------------------------------------------------------------

## 2. Printing on Multiple Lines

Multiple `cout` statements can be used to print output on different
lines.

### Newline using `\n`

``` cpp
std::cout << "Hello world";
std::cout << "\n";
std::cout << "Hello\n";
std::cout << "World\n";
```

### `std::endl`

``` cpp
std::cout << "Hello" << std::endl;
```

`std::endl`:

-   Moves the cursor to the next line.
-   Also flushes the output buffer.

For a simple newline, `\n` is generally preferred.

------------------------------------------------------------------------

## 3. Taking User Input with `cin`

`cin` is used to take input from the user.

``` cpp
#include <iostream>

int main() {
    int x;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "You have entered: " << x << "\n";

    return 0;
}
```

### Important points

``` cpp
std::cin >> x;
```

-   `std::cin` reads input from the keyboard.
-   `>>` is the extraction operator.
-   The entered value is stored in `x`.

------------------------------------------------------------------------

## 4. Basic Data Types with `cin` and `cout`

C++ provides several fundamental data types.

``` cpp
int x;
long int x1;
float y;
double z;
char grade;
bool value;
```

Example:

``` cpp
std::cout << "Enter int x: ";
std::cin >> x;

std::cout << "Enter float y: ";
std::cin >> y;

std::cout << "Enter double z: ";
std::cin >> z;

std::cout << "Enter char grade: ";
std::cin >> grade;

std::cout << "Enter bool value 0 or 1: ";
std::cin >> value;
```

### Common types

  Data Type            Typical Size Used For
  ------------ -------------------- ------------------------------
  `bool`                     1 byte `true` / `false`
  `char`                     1 byte Single character
  `int`                     4 bytes Whole numbers
  `long int`     Platform-dependent Larger whole numbers
  `float`                   4 bytes Decimal numbers
  `double`                  8 bytes More precise decimal numbers

Actual sizes can depend on the platform and compiler.

------------------------------------------------------------------------

## 5. Checking Data Type Sizes with `sizeof()`

The `sizeof()` operator tells us how much memory a type or object
occupies.

Example:

``` cpp
#include <iostream>

int main() {
    std::cout << "int: " << sizeof(int) << " byte(s)\n";
    std::cout << "float: " << sizeof(float) << " byte(s)\n";
    std::cout << "double: " << sizeof(double) << " byte(s)\n";
    std::cout << "long int: " << sizeof(long int) << " byte(s)\n";

    return 0;
}
```

### Key idea

``` cpp
sizeof(int)
```

returns the size of `int` on the current system/compiler.

This is useful because some data type sizes are platform-dependent.

------------------------------------------------------------------------

## 6. `using namespace std`

Instead of repeatedly writing:

``` cpp
std::cout
std::cin
```

we can write:

``` cpp
using namespace std;
```

Then:

``` cpp
cout << "Hello";
cin >> x;
```

Example:

``` cpp
#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Enter x: ";
    cin >> x;

    cout << "You entered: " << x << endl;

    return 0;
}
```

### Why use it?

It makes beginner programs shorter and easier to read.

### Important note

In larger projects, `using namespace std;` can cause naming conflicts.
It is generally safer to use specific names such as:

``` cpp
std::cout
std::cin
std::string
```

------------------------------------------------------------------------

## 7. Character Arrays for Names

A character array can store a C-style string.

``` cpp
char first_name[20];
char last_name[20];
```

Input:

``` cpp
cin >> first_name;
cin >> last_name;
```

Output:

``` cpp
cout << "Full name: " << first_name << " " << last_name << endl;
```

### `char` vs `char[]`

``` cpp
char grade;
```

Stores one character:

``` text
A
```

Whereas:

``` cpp
char first_name[20];
```

can store a sequence of characters:

``` text
Roshan
```

A `char[20]` can hold up to 19 visible characters plus the null
terminator `'\0'`.

------------------------------------------------------------------------

# Quick Syntax Reference

## Output

``` cpp
cout << "Hello";
```

## Input

``` cpp
cin >> x;
```

## New line

``` cpp
cout << "\n";
```

or:

``` cpp
cout << endl;
```

## Multiple values

``` cpp
cout << "x: " << x << " y: " << y << endl;
```

## Namespace

``` cpp
using namespace std;
```

## Data type size

``` cpp
sizeof(int)
```

## Character array

``` cpp
char name[20];
```

------------------------------------------------------------------------

# Key Operators

  Operator     Meaning
  ------------ ---------------------------
  `<<`         Insertion/output operator
  `>>`         Extraction/input operator
  `::`         Scope resolution operator
  `sizeof()`   Returns size in bytes

------------------------------------------------------------------------

# Learning Progress

-   [x] `cout` for output
-   [x] Printing multiple lines
-   [x] `\n` and `endl`
-   [x] `cin` for user input
-   [x] Basic data types
-   [x] `sizeof()` for data type sizes
-   [x] `using namespace std`
-   [x] Character arrays for basic string input

These concepts form the foundation for the next C++ topics in the
Striver A2Z roadmap.
