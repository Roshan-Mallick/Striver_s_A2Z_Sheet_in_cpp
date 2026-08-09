# C++ Basics --- Striver A2Z Notes

These notes cover the fundamental C++ concepts practiced while following the Striver A2Z C++ roadmap.

---

## 1. Variables

### Concept

A variable is a named memory location used to store a value.

```cpp
int age = 20;
```

Here:

- `int` → data type
- `age` → variable name
- `20` → stored value

A variable's value can be modified after declaration.

```cpp
int age = 20;
age = 21;
```

### Variable Naming Rules

Variable names can contain:

- Letters (`a-z`, `A-Z`)
- Digits (`0-9`)
- Underscore (`_`)

Rules:

- Cannot start with a digit.
- Cannot contain spaces.
- Cannot contain special characters.
- Cannot be a C++ keyword.
- C++ is case-sensitive.

Valid:

```cpp
int age;
int age2;
int student_age;
int _age;
```

Invalid:

```cpp
int 2age;          // ❌ Starts with a digit
int student age;   // ❌ Contains a space
int student-age;   // ❌ Contains a special character
int class;         // ❌ C++ keyword
```

### Case Sensitivity

C++ treats uppercase and lowercase letters as different.

```cpp
int age = 20;
int Age = 30;
int AGE = 40;
```

These are three different variables.

---

## 2. Constants

### Concept

A constant is a value that cannot be modified after initialization.

The `const` keyword is used to create a constant.

```cpp
const int pid = 1188;
```

Here:

- `const` → makes the value unchangeable
- `int` → data type
- `pid` → identifier
- `1188` → value

Example:

```cpp
int id = 1177;
const int pid = 1188;

id = 1100;       // ✅ Allowed
// pid = 2100;   // ❌ Not allowed
```

### Important Point

A `const` variable should normally be initialized when it is declared.

```cpp
const int MAX_AGE = 100;
```

---

## 3. Data Types

### Concept

A data type specifies the kind of value a variable can store.

```cpp
int age = 20;
float height = 5.8f;
double pi = 3.1415926535;
char grade = 'A';
bool isStudent = true;

long int population = 1000000;
long long int bigNumber = 9000000000LL;
```

### Common Data Types

| Data Type | Used For |
|---|---|
| `int` | Whole numbers |
| `float` | Decimal numbers |
| `double` | More precise decimal numbers |
| `char` | Single character |
| `bool` | `true` / `false` |
| `long int` | Larger integer values |
| `long long int` | Very large integer values |

### Important Points

`char` uses single quotes:

```cpp
char grade = 'A';
```

`bool` stores:

```cpp
true
false
```

A `long long` literal can use the `LL` suffix:

```cpp
long long int number = 9000000000LL;
```

Actual sizes of some types depend on the platform and compiler.

---

## 4. Type Casting

### Concept

Type casting means converting a value from one data type to another.

There are two basic forms covered here:

- Implicit type casting
- Explicit type casting

### Implicit Type Casting

C++ automatically converts a value when required.

```cpp
int num = 10;
double decimal_number = num;
```

The conversion is:

```text
int → double
```

C++ performs the conversion automatically.

Example:

```cpp
int a = 10;
double b = 2.5;

double result = a + b;
```

The `int` value is automatically converted to `double` during the calculation.

### Explicit Type Casting

The programmer explicitly requests the conversion.

In modern C++, `static_cast` is commonly used.

```cpp
double value = 10.75;
int converted_value = static_cast<int>(value);
```

The conversion is:

```text
double → int
10.75  → 10
```

The decimal part is removed.

### Difference

```text
Implicit → C++ converts automatically
Explicit → Programmer explicitly requests the conversion
```

---

## 5. Operators

### Concept

Operators are symbols used to perform operations on values.

```cpp
int a = 10;
int b = 20;

int result = a + b;
```

Here:

- `a` and `b` → operands
- `+` → operator
- `a + b` → expression

The main operator categories covered are:

- Arithmetic operators
- Relational operators
- Logical operators
- Increment / Decrement operators
- Assignment operators

---

## 6. Arithmetic Operators

Arithmetic operators are used to perform mathematical operations.

| Operator | Operation |
|---|---|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Remainder |

Example:

```cpp
int a = 10;
int b = 20;

cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;
```

### Important Point

When both operands are integers, integer division is performed.

```cpp
int a = 5;
int b = 2;

cout << a / b;
```

Output:

```text
2
```

---

## 7. Relational Operators

Relational operators are used to compare two values.

They return a boolean result:

```text
true  → 1
false → 0
```

| Operator | Meaning |
|---|---|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

Example:

```cpp
int a = 10;
int b = 20;

cout << (a == b) << endl;
cout << (a != b) << endl;
cout << (a > b) << endl;
cout << (a < b) << endl;
cout << (a >= b) << endl;
cout << (a <= b) << endl;
```

### Important: `=` vs `==`

```cpp
a = b;     // Assignment
a == b;    // Comparison
```

`=` assigns a value.

`==` checks whether two values are equal.

---

## 8. Logical Operators

Logical operators are used to combine or reverse conditions.

| Operator | Meaning |
|---|---|
| `&&` | AND |
| `||` | OR |
| `!` | NOT |

### AND `&&`

Both conditions must be true.

```cpp
age >= 18 && age <= 60
```

### OR `||`

At least one condition must be true.

```cpp
age < 18 || age > 60
```

### NOT `!`

Reverses the result.

```cpp
!(age >= 18)
```

### Quick Truth Table

| A | B | `A && B` | `A || B` |
|---|---|---|---|
| false | false | false | false |
| false | true | false | true |
| true | false | false | true |
| true | true | true | true |

---

## 9. Increment and Decrement Operators

These operators change a value by `1`.

### Increment `++`

Increases a value by `1`.

```cpp
int a = 10;
a++;
```

Now:

```text
a = 11
```

### Post-Increment

```cpp
a++
```

Uses the current value first, then increments.

```cpp
int a = 10;

cout << a++ << endl;  // 10
cout << a << endl;    // 11
```

### Pre-Increment

```cpp
++a
```

Increments first, then uses the value.

```cpp
int a = 10;

cout << ++a << endl;  // 11
```

### Decrement `--`

Decreases a value by `1`.

```cpp
a--;
--a;
```

The same pre/post concept applies.

```text
a++ → use first → increase
++a → increase first → use

a-- → use first → decrease
--a → decrease first → use
```

---

## 10. Assignment Operators

Assignment operators are used to assign or update values.

| Operator | Meaning | Equivalent |
|---|---|---|
| `=` | Assignment | `a = 10` |
| `+=` | Add and assign | `a = a + 5` |
| `-=` | Subtract and assign | `a = a - 5` |
| `*=` | Multiply and assign | `a = a * 5` |
| `/=` | Divide and assign | `a = a / 4` |
| `%=` | Remainder and assign | `a = a % 3` |

Example:

```cpp
int a = 10;

a += 5; // a = a + 5 = 15
a -= 5; // a = a - 5 = 10
a *= 5; // a = a * 5 = 50
a /= 4; // a = a / 4 = 12
a %= 3; // a = a % 3 = 0
```

---

# Quick Syntax Reference

## Variable

```cpp
int age = 20;
```

## Constant

```cpp
const int MAX_AGE = 100;
```

## Type Casting

```cpp
double value = 10.75;
int number = static_cast<int>(value);
```

## Arithmetic

```cpp
a + b
a - b
a * b
a / b
a % b
```

## Relational

```cpp
a == b
a != b
a > b
a < b
a >= b
a <= b
```

## Logical

```cpp
a && b
a || b
!a
```

## Increment / Decrement

```cpp
a++
++a
a--
--a
```

## Assignment

```cpp
a = 10;
a += 5;
a -= 5;
a *= 5;
a /= 5;
a %= 5;
```

---

# Key Concepts

```text
Variable
→ Stores a value that can be modified.

Constant
→ Stores a value that cannot be modified.

Data Type
→ Defines what type of value can be stored.

Type Casting
→ Converts a value from one data type to another.

Operator
→ Symbol used to perform an operation.

Arithmetic
→ +  -  *  /  %

Relational
→ ==  !=  >  <  >=  <=

Logical
→ &&  ||  !

Increment / Decrement
→ ++  --

Assignment
→ =  +=  -=  *=  /=  %=
```

---

# Learning Progress

- [x] Variables
- [x] Variable naming rules
- [x] Constants
- [x] Data types
- [x] Implicit type casting
- [x] Explicit type casting with `static_cast`
- [x] Arithmetic operators
- [x] Relational operators
- [x] Logical operators
- [x] Increment / Decrement operators
- [x] Assignment operators

These concepts form the foundation for the next topics in the Striver A2Z C++ roadmap.
