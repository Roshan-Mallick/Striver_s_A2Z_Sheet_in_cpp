# Switch Case in C++

## 1. What is Switch Case?

`switch` is a decision-making statement used when we need to compare one variable/expression against multiple fixed values.

### Syntax

```cpp
switch (expression) {

    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code if no case matches
}
```

---

## 2. Basic Example

```cpp
int choice;
cin >> choice;

switch (choice) {

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    default:
        cout << "Invalid choice";
}
```

If `choice` is `1`, case 1 executes.

---

## 3. `break`

`break` is used to exit the switch after a matching case is executed.

```cpp
case 1:
    cout << "One";
    break;
```

Without `break`, execution can continue into the next case. This is called **fall-through**.

---

## 4. `default`

`default` executes when none of the cases match.

```cpp
default:
    cout << "Invalid choice";
```

Example:

```text
Input: 5
Output: Invalid choice
```

---

# Programs in This Folder

## 01_basic_switch.cpp

Basic demonstration of the `switch-case` statement.

Concepts:
- `switch`
- `case`
- `break`
- `default`

---

## 02_day_of_week.cpp

Uses a number to display the corresponding day.

Example:

```text
1 → Monday
2 → Tuesday
3 → Wednesday
...
7 → Sunday
```

Main concept:

```cpp
switch(day)
```

---

## 03_calculator.cpp

A simple calculator using operators and `switch`.

Example:

```text
+ → Addition
- → Subtraction
* → Multiplication
/ → Division
```

The operator can be used as the switch expression:

```cpp
switch (op)
```

---

## 04_month_days.cpp

Uses the month number to determine the number of days.

Example:

```text
1  → 31 days
2  → 28/29 days
3  → 31 days
```

Important concept: Multiple cases can share the same code.

```cpp
case 1:
case 3:
case 5:
case 7:
    cout << "31 days";
    break;
```

---

## 05_menu_driven_program.cpp

A menu-driven program allows the user to select an option.

Example:

```text
1. Chicken Biriyani
2. Mutton Biriyani
3. Veg Biriyani
```

The user's choice is passed to:

```cpp
switch (choice)
```

This is one of the most common practical uses of `switch-case`.

---

## 06_vowel_consonant.cpp

Checks whether a character is a vowel or consonant.

Vowels:

```text
a e i o u
A E I O U
```

Multiple cases can execute the same statement:

```cpp
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout << "Vowel";
    break;
```

The `default` case can then check whether the character is an alphabet.

```cpp
if ((ch >= 'a' && ch <= 'z') ||
    (ch >= 'A' && ch <= 'Z')) {

    cout << "Consonant";
}
else {
    cout << "Invalid character";
}
```

---

# Important Concepts

## Multiple Cases

Multiple cases can share one block of code.

```cpp
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout << "Vowel";
    break;
```

This is useful when different inputs should produce the same output.

---

## Character Switch

`switch` can work with characters.

```cpp
char op;
cin >> op;

switch (op) {

    case '+':
        cout << "Addition";
        break;

    case '-':
        cout << "Subtraction";
        break;
}
```

---

## Integer Switch

`switch` is commonly used with integers.

```cpp
int choice;
cin >> choice;

switch (choice) {

    case 1:
        cout << "Option 1";
        break;

    case 2:
        cout << "Option 2";
        break;
}
```

---

# Switch vs If-Else

### Switch

Best when checking one value against several fixed values.

```cpp
switch(choice) {
    case 1:
        ...
        break;

    case 2:
        ...
        break;
}
```

### If-Else

Better for ranges and complex conditions.

```cpp
if (marks >= 90) {
    ...
}
else if (marks >= 80) {
    ...
}
```

`switch` is generally not suitable for conditions such as:

```cpp
marks >= 90
age > 18
x > y
```

---

# Common Mistakes

### 1. Forgetting `break`

```cpp
case 1:
    cout << "One";

case 2:
    cout << "Two";
```

This can cause unwanted fall-through.

### 2. Using `=` instead of comparison

`switch` does not use conditions like:

```cpp
case x = 10:   // Wrong
```

Use a constant case value:

```cpp
case 10:       // Correct
```

### 3. Forgetting `default`

It is good practice to handle invalid input.

```cpp
default:
    cout << "Invalid choice";
```

---

# Quick Revision

```text
switch
   ↓
checks expression
   ↓
matches a case
   ↓
executes that case
   ↓
break
   ↓
exits switch
```

### Remember

- `switch` → multiple fixed choices
- `case` → possible value
- `break` → exit switch
- `default` → no case matched
- Multiple cases → can share the same code
- `switch` works with values such as `int` and `char`
- Use `if-else` for ranges and complex conditions
