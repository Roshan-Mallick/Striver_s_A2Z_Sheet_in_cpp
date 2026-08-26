# Arrays and Strings — Notes

## 1. Arrays

### What is an Array?

An array is a collection of multiple values of the **same data type** stored under one variable name.

Example:

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

### Array Declaration

```cpp
int arr[5];
```

Here:

* `int` → data type
* `arr` → array name
* `5` → size of the array

### Array Indexing

Array indexing starts from `0`.

```text
Index:  0   1   2   3   4
Value: 10  20  30  40  50
```

Access elements using:

```cpp
arr[0];
arr[1];
arr[2];
```

For an array of size `size`, the last index is:

```cpp
size - 1
```

---

## 2. Array Input

```cpp
for (int i = 0; i < size; i++) {
    cin >> arr[i];
}
```

The loop traverses every valid index from:

```text
0 → size - 1
```

---

## 3. Array Output / Traversal

```cpp
for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
```

This process is called **array traversal**.

---

## 4. Finding the Largest Element

### Method: Linear Traversal with Running Maximum

Start by assuming the first element is the largest:

```cpp
int largest = arr[0];
```

Then check the remaining elements:

```cpp
for (int i = 1; i < size; i++) {
    if (arr[i] > largest) {
        largest = arr[i];
    }
}
```

Logic:

```text
Assume first element is largest
        ↓
Traverse remaining elements
        ↓
Is current element > largest?
        ↓
Yes → Update largest
No  → Continue
```

---

## 5. Finding the Smallest Element

### Method: Linear Traversal with Running Minimum

Start by assuming the first element is the smallest:

```cpp
int smallest = arr[0];
```

Then:

```cpp
for (int i = 1; i < size; i++) {
    if (arr[i] < smallest) {
        smallest = arr[i];
    }
}
```

Logic:

```text
Assume first element is smallest
        ↓
Traverse remaining elements
        ↓
Is current element < smallest?
        ↓
Yes → Update smallest
No  → Continue
```

---

## 6. Reverse an Array

To print an array in reverse order, start from the last index:

```cpp
for (int i = size - 1; i >= 0; i--) {
    cout << arr[i] << " ";
}
```

Example:

```text
Array:   10 20 30 40 50
Reverse: 50 40 30 20 10
```

---

## 7. Sum of Array Elements

Use an **accumulator** variable:

```cpp
int sum = 0;
```

Then:

```cpp
for (int i = 0; i < size; i++) {
    sum = sum + arr[i];
}
```

Example:

```text
Array: 10 20 30

sum = 0

sum = 0 + 10 = 10
sum = 10 + 20 = 30
sum = 30 + 30 = 60
```

### Important

Do not write:

```cpp
int sum;
```

without initializing it. A local variable may contain an indeterminate value.

Use:

```cpp
int sum = 0;
```

---

## 8. Counting Even and Odd Elements

Create two counters:

```cpp
int even = 0;
int odd = 0;
```

Traverse the array:

```cpp
for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
        even++;
    } else {
        odd++;
    }
}
```

Even number condition:

```cpp
arr[i] % 2 == 0
```

---

# Strings

## 9. What is a String?

A string stores a sequence of characters.

Example:

```cpp
string name = "Roshan";
```

To use `string`:

```cpp
#include <string>
```

---

## 10. String Input and Output

```cpp
string name;

cin >> name;

cout << name;
```

Example:

```text
Input:  Hello
Output: Hello
```

### `cin` vs `getline()`

```cpp
cin >> name;
```

Reads one word.

```cpp
getline(cin, name);
```

Reads the complete line, including spaces.

Example:

```text
Input: Hello World
```

Using `cin`:

```text
Hello
```

Using `getline()`:

```text
Hello World
```

---

## 11. String Indexing

Strings also use indexing starting from `0`.

```cpp
string text = "HELLO";
```

```text
Index:  0 1 2 3 4
Value:  H E L L O
```

Access characters using:

```cpp
text[0];
text[1];
text[2];
```

The last character index is:

```cpp
text.length() - 1
```

---

## 12. Reverse a String

Start from the last character:

```cpp
for (int i = text.length() - 1; i >= 0; i--) {
    cout << text[i];
}
```

Example:

```text
Input:  hello
Output: olleh
```

---

## 13. Character Arrays

A string can also be handled as a character array.

```cpp
char str[size];
```

Example:

```text
Index:  0 1 2 3 4
Value:  H E L L O
```

Input each character:

```cpp
for (int i = 0; i < size; i++) {
    cin >> str[i];
}
```

---

## 14. Counting Vowels

Vowels are:

```text
a, e, i, o, u
A, E, I, O, U
```

Create a counter:

```cpp
int vowels = 0;
```

Check each character:

```cpp
if (text[i] == 'a' || text[i] == 'A' ||
    text[i] == 'e' || text[i] == 'E' ||
    text[i] == 'i' || text[i] == 'I' ||
    text[i] == 'o' || text[i] == 'O' ||
    text[i] == 'u' || text[i] == 'U') {
    
    vowels++;
}
```

### Important: `=` vs `==`

```cpp
text[i] = 'a';
```

Means:

```text
Assign 'a'
```

```cpp
text[i] == 'a';
```

Means:

```text
Compare with 'a'
```

---

## 15. Palindrome String

A palindrome reads the same from both directions.

Examples:

```text
MADAM
LEVEL
RADAR
```

Not a palindrome:

```text
HELLO
WORLD
```

### Logic

Compare characters from the beginning and end:

```cpp
for (int i = 0; i < size / 2; i++) {
    if (str[i] != str[size - 1 - i]) {
        cout << "Not palindrome" << endl;
        return 0;
    }
}

cout << "It is a palindrome" << endl;
```

### Understanding `str[size - 1 - i]`

For:

```text
String: M A D A M
Index:  0 1 2 3 4
Size:   5
```

When `i = 0`:

```cpp
str[i]              → str[0]
str[size - 1 - i]   → str[4]
```

Comparison:

```text
M ↔ M
```

When `i = 1`:

```cpp
str[1] ↔ str[3]
```

Comparison:

```text
A ↔ A
```

So the general comparison is:

```cpp
str[i] != str[size - 1 - i]
```

Meaning:

```text
First character       ↔ Last character
Second character      ↔ Second-last character
Third character       ↔ Third-last character
```

If any pair does not match, the string is **not a palindrome**.

---

# Key Concepts Learned

## Arrays

* Array declaration
* Array size
* Array indexing
* Array input
* Array output
* Array traversal
* Largest element
* Smallest element
* Reverse array
* Sum of array elements
* Accumulator
* Counting even and odd numbers
* Linear traversal
* Running maximum
* Running minimum

## Strings

* `string` declaration
* String input and output
* `cin`
* `getline()`
* String indexing
* String length
* Reverse string
* Character arrays
* Counting vowels
* Character comparison
* `=` vs `==`
* Palindrome checking

---

# Important Formulas and Patterns

### Last array index

```cpp
size - 1
```

### Last string index

```cpp
text.length() - 1
```

### Even number

```cpp
number % 2 == 0
```

### Running maximum

```cpp
if (arr[i] > largest) {
    largest = arr[i];
}
```

### Running minimum

```cpp
if (arr[i] < smallest) {
    smallest = arr[i];
}
```

### Array sum

```cpp
sum = sum + arr[i];
```

### Palindrome comparison

```cpp
str[i] != str[size - 1 - i]
```

# Programs Completed

```text
01_array_input_output.cpp
02_largest_element.cpp
03_smallest_element.cpp
04_reverse_array.cpp
05_sum_of_array.cpp
06_count_even_odd.cpp
07_string_input_output.cpp
08_reverse_string.cpp
09_count_vowels.cpp
10_palindrome_string.cpp
```

