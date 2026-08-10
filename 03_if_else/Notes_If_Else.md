# If-Else Statements in C++

## 1. If Statement

The `if` statement is used to execute a block of code when a condition is true.

### Syntax

```cpp
if (condition) {
    // code
}
```

### Example

```cpp
int a = 10;
int b = 20;

if (a > b) {
    cout << "a is greater than b";
}
```

---

## 2. If-Else Statement

The `if-else` statement executes one block when the condition is true and another block when it is false.

### Syntax

```cpp
if (condition) {
    // code if true
} else {
    // code if false
}
```

### Example

```cpp
if (a > b) {
    cout << "a is greater than b";
} else {
    cout << "b is greater than a";
}
```

---

## 3. Else-If Statement

Used when there are multiple conditions to check.

### Syntax

```cpp
if (condition1) {
    // code
} else if (condition2) {
    // code
} else {
    // code
}
```

### Example

```cpp
if (a > b && a > c) {
    cout << "a is the greatest";
} else if (b > a && b > c) {
    cout << "b is the greatest";
} else {
    cout << "c is the greatest";
}
```

---

## 4. Nested If

An `if` statement inside another `if` statement is called a nested `if`.

### Example

```cpp
if (a > 0) {
    if (a > b) {
        cout << "a is positive and greater than b";
    }
}
```

---

## 5. Even or Odd

The modulus operator `%` can be used to check whether a number is even or odd.

```cpp
if (num % 2 == 0) {
    cout << "Number is even";
} else {
    cout << "Number is odd";
}
```

---

## 6. Positive, Negative, or Zero

```cpp
if (num == 0) {
    cout << "Number is neither positive nor negative";
} else if (num > 0) {
    cout << "Number is positive";
} else {
    cout << "Number is negative";
}
```

---

## 7. Grade Decision

Conditions can be combined to decide a grade based on marks.

```cpp
if (marks >= 90) {
    cout << "A+ Grade";
} else if (marks >= 75) {
    cout << "A Grade";
} else if (marks >= 60) {
    cout << "B Grade";
} else if (marks >= 45) {
    cout << "C Grade";
} else {
    cout << "Failed";
}
```

---

## Key Points

- `if` checks a condition.
- `else` executes when the `if` condition is false.
- `else if` allows multiple conditions.
- Nested `if` means an `if` statement inside another `if`.
- Conditions usually use relational operators such as `>`, `<`, `>=`, `<=`, `==`, and `!=`.
- Logical operators such as `&&`, `||`, and `!` can combine conditions.
- `%` is useful for checking even and odd numbers.
