# C++ For Loops — Striver A2Z Notes

These notes cover `for` loop syntax, execution flow, step increments, accumulators, integer overflow, execution tracing, and nested loops for pattern printing while following the Striver A2Z C++ roadmap.

---

## 1. Syntax of a `for` Loop

### Concept

A `for` loop repeatedly executes a block of code. It combines **initialization**, **condition checking**, and **update** in one statement.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    cout << "\n";
    return 0;
}
```

### Execution Flow

1. **Initialization** — runs once before the loop starts.
   ```cpp
   int i = 1
   ```

2. **Condition Check** — evaluated before every iteration.
   ```cpp
   i <= 10
   ```

3. **Body Execution** — executes when the condition is `true`.

4. **Update** — runs after each iteration.
   ```cpp
   i++
   ```

5. Control returns to the **condition check**.

When the condition becomes `false`, the loop terminates.

### General Syntax

```cpp
for (initialization; condition; update) {
    // statements
}
```

### Variable Scope

A variable declared inside the loop header is accessible only inside that loop.

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i;
}

// i is not accessible here
```

---

## 2. Step Increments

The update section does not have to increase the counter by `1`.

### Normal Increment

```cpp
for (int i = 1; i <= n; i++) {
    cout << i << " ";
}
```

Output:

```text
1 2 3 4 5 ...
```

### Printing Even Numbers

```cpp
for (int i = 2; i <= n; i += 2) {
    cout << i << " ";
}
```

Output for `n = 10`:

```text
2 4 6 8 10
```

### Printing Odd Numbers

```cpp
for (int i = 1; i <= n; i += 2) {
    cout << i << " ";
}
```

Output for `n = 10`:

```text
1 3 5 7 9
```

### Why Use `i += 2`?

Instead of checking every number:

```cpp
for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
        cout << i << " ";
    }
}
```

we can directly visit even numbers:

```cpp
for (int i = 2; i <= n; i += 2) {
    cout << i << " ";
}
```

The second approach avoids unnecessary iterations and modulo checks.

---

## 3. Accumulator Pattern

An **accumulator** is a variable that stores a running result across loop iterations.

Common examples:

- Sum
- Product
- Count
- Maximum
- Minimum

### Sum of 1 to N

For addition, initialize the accumulator to `0`.

```cpp
int sum = 0;

for (int i = 1; i <= n; i++) {
    sum = sum + i;
}
```

Short form:

```cpp
sum += i;
```

### Why Start at `0`?

Because `0` is the additive identity:

```text
0 + x = x
```

Example for `n = 5`:

```text
sum = 0
sum = 0 + 1 = 1
sum = 1 + 2 = 3
sum = 3 + 3 = 6
sum = 6 + 4 = 10
sum = 10 + 5 = 15
```

---

## 4. Factorial Using an Accumulator

Factorial is a multiplication problem:

```text
n! = 1 × 2 × 3 × ... × n
```

Use `1` as the initial value.

```cpp
long long fact = 1;

for (int i = 1; i <= num; i++) {
    fact = fact * i;
}
```

Short form:

```cpp
fact *= i;
```

### Why Start at `1`?

Because `1` is the multiplicative identity:

```text
1 × x = x
```

If we start with `0`:

```cpp
int fact = 0;
```

then:

```text
0 × 1 = 0
0 × 2 = 0
0 × 3 = 0
```

The final result will always be `0`.

---

## 5. Integer Overflow

Integer data types have limited ranges. If a calculation exceeds that range, **integer overflow** can occur.

### Common Integer Types

| Data Type | Typical Size | Approximate Maximum |
|---|---:|---:|
| `int` | 4 bytes | `2.147 × 10^9` |
| `long long` | 8 bytes | `9.22 × 10^18` |

For factorial:

```text
12! = 479001600
13! = 6227020800
20! = 2432902008176640000
```

A typical 32-bit `int` cannot store `13!`.

A `long long` can store factorials up to `20!`, but `21!` exceeds the signed 64-bit range.

### Recommended Code

```cpp
long long fact = 1;

for (int i = 1; i <= num; i++) {
    fact *= i;
}
```

> Note: `long long` is useful for a larger range, but it does not eliminate overflow for arbitrarily large factorials.

---

## 6. Execution Tracing

Execution tracing means observing how variables change during each iteration.

When showing a calculation such as:

```text
0 + 1 = 1
1 + 2 = 3
2 + 3 = 6
```

print the current state **before updating it**.

### Correct Tracing

```cpp
int sum = 0;

for (int i = 1; i <= num; i++) {
    cout << sum << " + " << i << " = " << (sum + i) << endl;

    sum = sum + i;
}
```

### Why This Order Matters

Suppose:

```text
sum = 3
i = 4
```

Before updating:

```text
3 + 4 = 7
```

Then:

```cpp
sum = sum + i;
```

changes `sum` to:

```text
7
```

If you update first and then print, you lose the previous state needed for the trace.

---

## 7. Nested `for` Loops

A **nested loop** is a loop inside another loop.

For pattern problems:

- **Outer loop** → controls rows
- **Inner loop** → controls columns/items in each row

General structure:

```cpp
for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= cols; j++) {
        // pattern logic
    }

    cout << endl;
}
```

Think of it as:

```text
Outer loop
 ├── Inner loop
 ├── Inner loop
 └── Inner loop
```

The inner loop completes all its iterations before the outer loop moves to its next iteration.

---

## 8. Square Pattern

### Code

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        cout << "* ";
    }

    cout << endl;
}
```

For `n = 4`:

```text
* * * *
* * * *
* * * *
* * * *
```

### Understanding the Loops

```cpp
for (int i = 1; i <= 4; i++)
```

creates 4 rows.

```cpp
for (int j = 1; j <= 4; j++)
```

prints 4 stars in each row.

Therefore:

```text
Rows × Columns
4 × 4
```

---

## 9. Inverted Triangle Pattern

The inner loop can depend on the outer loop variable.

### Code

```cpp
for (int i = 1; i <= 5; i++) {
    for (int j = i; j <= 5; j++) {
        cout << "*";
    }

    cout << endl;
}
```

### Output

```text
*****
****
***
**
*
```

### How It Works

| Row (`i`) | Inner Loop Starts | Number of `*` |
|---:|---:|---:|
| 1 | `j = 1` | 5 |
| 2 | `j = 2` | 4 |
| 3 | `j = 3` | 3 |
| 4 | `j = 4` | 2 |
| 5 | `j = 5` | 1 |

The important idea is:

```cpp
j = i
```

As `i` increases, the starting value of `j` also increases, so fewer stars are printed.

---

# Quick Syntax Reference

## Basic `for` Loop

```cpp
for (int i = 1; i <= n; i++) {
    // code
}
```

## Step Increment

```cpp
for (int i = 2; i <= n; i += 2) {
    // even numbers
}
```

## Sum Accumulator

```cpp
int sum = 0;

for (int i = 1; i <= n; i++) {
    sum += i;
}
```

## Factorial Accumulator

```cpp
long long fact = 1;

for (int i = 1; i <= n; i++) {
    fact *= i;
}
```

## Nested Loop

```cpp
for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= cols; j++) {
        // pattern logic
    }

    cout << endl;
}
```

---

# Key Concepts and Operators

| Concept / Operator | Meaning |
|---|---|
| `i++` | Increase `i` by `1` |
| `i += k` | Increase `i` by `k` |
| `sum = 0` | Starting value for addition |
| `fact = 1` | Starting value for multiplication |
| `sum += i` | Add `i` to `sum` |
| `fact *= i` | Multiply `fact` by `i` |
| `long long` | 64-bit signed integer type on typical systems |
| `cout << endl` | Move output to the next line |
| Outer loop | Usually controls rows |
| Inner loop | Usually controls columns/items |

---

# Folder File Summary

| File Name | Key Concept |
|---|---|
| `01_basic_for_loop.cpp` | Basic `for` loop syntax |
| `02_print_1_to_n.cpp` | Dynamic loop limit using input |
| `03_print_even_numbers.cpp` | Step increment using `i += 2` |
| `04_print_odd_numbers.cpp` | Odd number iteration |
| `05_sum_1_to_n.cpp` | Sum accumulator and state tracing |
| `06_multiplication_table.cpp` | Formatted arithmetic with loops |
| `07_factorial.cpp` | Multiplicative accumulator and `long long` |
| `08_nested_for_loop.cpp` | Nested loops and 2D grid |
| `09_inverted_triangle_pattern.cpp` | Dependent inner-loop bounds |

---

# Learning Progress

- [x] Basic `for` loop syntax
- [x] Initialization, condition, and update
- [x] Loop variable scope
- [x] Dynamic loop limits using `cin`
- [x] Step increments using `i += 2`
- [x] Even and odd number iteration
- [x] Sum accumulator
- [x] Factorial accumulator
- [x] Integer overflow basics
- [x] `long long` for larger integer ranges
- [x] Execution state tracing
- [x] Nested loops
- [x] Rows and columns
- [x] Square pattern
- [x] Inverted triangle pattern

---

# Important Takeaways

1. A `for` loop follows:
   ```text
   Initialize → Check → Execute → Update → Check → ...
   ```

2. Use `i += 2` when you only need every second number.

3. Use `0` for additive accumulators:
   ```cpp
   int sum = 0;
   ```

4. Use `1` for multiplicative accumulators:
   ```cpp
   long long fact = 1;
   ```

5. Always consider the data type when performing large calculations.

6. In nested loops, the outer loop commonly represents **rows** and the inner loop represents **columns**.

7. For pattern problems, changing the inner loop's starting point or ending point changes the shape of the pattern.

---

## Striver A2Z Progress

**Topic: For Loops**

The concepts covered here form the foundation for later DSA topics, especially:

- Array traversal
- Searching
- Counting
- Prefix/suffix processing
- Nested iteration
- Pattern problems
- Time complexity analysis
