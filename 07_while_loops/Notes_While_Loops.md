# C++ While Loops — Striver A2Z Notes

These notes cover `while` loop syntax, execution flow, counters, accumulators, number manipulation, digit extraction, and common while-loop patterns following the Striver A2Z C++ practice roadmap.

---

## 1. Syntax of a `while` Loop

### Concept

A `while` loop repeatedly executes a block of code as long as its condition is `true`.

```cpp
while (condition) {
    // statements
}
```

### Basic Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        cout << i << " ";
        i++;
    }

    cout << endl;
    return 0;
}
```

### Execution Flow

1. Initialize the variable before the loop.
   ```cpp
   int i = 1;
   ```

2. Check the condition.
   ```cpp
   i <= 10
   ```

3. Execute the loop body if the condition is `true`.

4. Update the loop variable.
   ```cpp
   i++;
   ```

5. Return to the condition check.

6. When the condition becomes `false`, the loop terminates.

### General Structure

```cpp
initialization;

while (condition) {
    // statements
    update;
}
```

> Unlike a `for` loop, initialization and update are written separately in a `while` loop.

---

## 2. Basic Counter Loop

A counter variable controls how many times the loop executes.

```cpp
int i = 1;

while (i <= num) {
    cout << i << endl;
    i++;
}
```

For `num = 5`:

```text
1
2
3
4
5
```

### Important

If you forget:

```cpp
i++;
```

the condition may never become false, resulting in an **infinite loop**.

---

## 3. Print 1 to N

### Code

```cpp
int i = 1;

while (i <= num) {
    cout << i << " ";
    i++;
}
```

For input:

```text
5
```

Output:

```text
1 2 3 4 5
```

### Execution

```text
i = 1 → print 1
i = 2 → print 2
i = 3 → print 3
i = 4 → print 4
i = 5 → print 5
i = 6 → stop
```

---

## 4. Print Even Numbers

An even number is divisible by `2`.

### Using a condition

```cpp
int i = 1;

while (i <= num) {
    if (i % 2 == 0) {
        cout << i << " ";
    }

    i++;
}
```

For `num = 10`:

```text
2 4 6 8 10
```

### Directly Iterating Through Even Numbers

```cpp
int i = 2;

while (i <= num) {
    cout << i << " ";
    i += 2;
}
```

The second approach avoids checking odd numbers.

---

## 5. Print Odd Numbers

An odd number is not divisible by `2`.

### Using a condition

```cpp
int i = 1;

while (i <= num) {
    if (i % 2 != 0) {
        cout << i << " ";
    }

    i++;
}
```

For `num = 10`:

```text
1 3 5 7 9
```

### Directly Iterating Through Odd Numbers

```cpp
int i = 1;

while (i <= num) {
    cout << i << " ";
    i += 2;
}
```

---

## 6. Sum from 1 to N

An accumulator stores a running result.

For addition, initialize the accumulator to `0`.

```cpp
int i = 1;
int sum = 0;

while (i <= num) {
    sum = sum + i;
    i++;
}
```

Short form:

```cpp
sum += i;
```

### Example: N = 5

```text
sum = 0

0 + 1 = 1
1 + 2 = 3
3 + 3 = 6
6 + 4 = 10
10 + 5 = 15
```

Final result:

```text
15
```

### Why Start With 0?

`0` is the additive identity:

```text
0 + x = x
```

---

## 7. Sum for N Iterations

Sometimes `num` represents the **number of iterations**, rather than a maximum sum value.

Correct:

```cpp
int i = 1;
int sum = 0;

while (i <= num) {
    sum = sum + i;
    cout << sum << endl;
    i++;
}
```

For `num = 10`:

```text
1
3
6
10
15
21
28
36
45
55
```

The loop runs exactly **10 times**.

### Important Difference

```cpp
while (sum <= num)
```

means:

> Continue while the current sum is less than or equal to `num`.

Whereas:

```cpp
while (i <= num)
```

means:

> Repeat the operation `num` times.

---

## 8. Reverse a Number

To reverse a number:

1. Get the last digit using `% 10`.
2. Add it to the reversed number.
3. Remove the last digit using `/ 10`.

### Code

```cpp
int num = 1234;
int rem;
int rev = 0;

while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
}
```

Output:

```text
4321
```

### Important Operations

```cpp
num % 10
```

Gets the last digit.

```cpp
num / 10
```

Removes the last digit.

### Execution Trace

For `1234`:

```text
1234 % 10 = 4
rev = 0 * 10 + 4 = 4
1234 / 10 = 123

123 % 10 = 3
rev = 4 * 10 + 3 = 43
123 / 10 = 12

12 % 10 = 2
rev = 43 * 10 + 2 = 432
12 / 10 = 1

1 % 10 = 1
rev = 432 * 10 + 1 = 4321
1 / 10 = 0
```

---

## 9. Count the Number of Digits

To count digits, repeatedly remove the last digit.

### Code

```cpp
int num = 343;
int count = 0;

while (num != 0) {
    num = num / 10;
    count++;
}

cout << count << endl;
```

Output:

```text
3
```

### Execution

```text
343 / 10 = 34   → count = 1
34 / 10  = 3    → count = 2
3 / 10   = 0    → count = 3
```

The loop stops when:

```cpp
num != 0
```

becomes false.

### Important

```cpp
num / 10
```

removes one digit at a time.

---

## 10. Sum of Digits

The **sum of digits** means adding every individual digit of a number.

Example:

```text
343

3 + 4 + 3 = 10
```

### Code

```cpp
int num = 343;
int sum = 0;

while (num != 0) {
    sum = sum + (num % 10);
    num = num / 10;
}

cout << sum << endl;
```

Output:

```text
10
```

### Execution Trace

```text
343 % 10 = 3
sum = 0 + 3 = 3
343 / 10 = 34

34 % 10 = 4
sum = 3 + 4 = 7
34 / 10 = 3

3 % 10 = 3
sum = 7 + 3 = 10
3 / 10 = 0
```

Final result:

```text
10
```

---

## 11. `% 10` vs `/ 10`

These two operations are extremely important for number-based problems.

### `% 10`

Gets the last digit.

```cpp
int rem = num % 10;
```

Example:

```text
343 % 10 = 3
1234 % 10 = 4
```

### `/ 10`

Removes the last digit.

```cpp
num = num / 10;
```

Example:

```text
343 / 10 = 34
1234 / 10 = 123
```

### Quick Reference

| Operation | Purpose |
|---|---|
| `num % 10` | Get last digit |
| `num / 10` | Remove last digit |

This pattern is used heavily in digit-based problems.

---

## 12. Execution Tracing

Tracing means observing how variables change during every iteration.

For example:

```cpp
int num = 343;
int sum = 0;

while (num != 0) {
    sum = sum + (num % 10);
    num = num / 10;
}
```

Trace:

| Iteration | `num` | `num % 10` | `sum` | New `num` |
|---:|---:|---:|---:|---:|
| 1 | 343 | 3 | 3 | 34 |
| 2 | 34 | 4 | 7 | 3 |
| 3 | 3 | 3 | 10 | 0 |

When `num` becomes `0`, the loop stops.

Tracing is useful for debugging and understanding loop execution.

---

## 13. Common While Loop Mistakes

### Mistake 1: Forgetting the Update

Wrong:

```cpp
int i = 1;

while (i <= 10) {
    cout << i << endl;
}
```

`i` never changes, so the loop can become infinite.

Correct:

```cpp
int i = 1;

while (i <= 10) {
    cout << i << endl;
    i++;
}
```

---

### Mistake 2: Using `% 10` to Remove a Digit

Wrong:

```cpp
num = num % 10;
```

This keeps only the last digit.

Correct:

```cpp
num = num / 10;
```

This removes the last digit.

---

### Mistake 3: Adding the Modified Number

Wrong:

```cpp
num = num / 10;
sum = sum + num;
```

This does not calculate the sum of digits.

Correct:

```cpp
sum = sum + (num % 10);
num = num / 10;
```

---

### Mistake 4: Incorrect Loop Condition

If you want `num` iterations:

```cpp
while (i <= num)
```

If you want to process every digit:

```cpp
while (num != 0)
```

The condition should match the purpose of the loop.

---

## Quick Syntax Reference

### Basic While Loop

```cpp
int i = 1;

while (i <= n) {
    // code
    i++;
}
```

### Even Numbers

```cpp
int i = 2;

while (i <= n) {
    cout << i << " ";
    i += 2;
}
```

### Odd Numbers

```cpp
int i = 1;

while (i <= n) {
    cout << i << " ";
    i += 2;
}
```

### Sum 1 to N

```cpp
int i = 1;
int sum = 0;

while (i <= n) {
    sum += i;
    i++;
}
```

### Reverse Number

```cpp
while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
}
```

### Count Digits

```cpp
while (num != 0) {
    num = num / 10;
    count++;
}
```

### Sum of Digits

```cpp
while (num != 0) {
    sum += num % 10;
    num /= 10;
}
```

---

# Key Concepts and Operators

| Concept / Operator | Meaning |
|---|---|
| `while (condition)` | Repeat while condition is true |
| `i++` | Increase `i` by 1 |
| `i += 2` | Increase `i` by 2 |
| `sum = 0` | Starting value for addition |
| `sum += i` | Add `i` to `sum` |
| `num % 10` | Get the last digit |
| `num / 10` | Remove the last digit |
| `rev * 10 + rem` | Build the reversed number |
| `num != 0` | Process digits until no digits remain |

---

# Folder File Summary

| File Name | Key Concept |
|---|---|
| `01_basic_while_loop.cpp` | Basic `while` loop syntax |
| `02_print_1_to_n.cpp` | Counter-controlled loop |
| `03_print_even_numbers.cpp` | Even numbers |
| `04_print_odd_numbers.cpp` | Odd numbers |
| `05_sum_1_to_n.cpp` | Sum accumulator |
| `06_reverse_number.cpp` | Number reversal |
| `07_count_digits.cpp` | Digit counting |
| `08_sum_of_digits.cpp` | Sum of individual digits |
| `Notes_While_Loops.md` | Concepts and explanations |

---

# Learning Progress

- [x] Basic `while` loop syntax
- [x] Initialization and condition checking
- [x] Loop variable updates
- [x] Counter-controlled loops
- [x] Print 1 to N
- [x] Even numbers
- [x] Odd numbers
- [x] Sum from 1 to N
- [x] Accumulator pattern
- [x] Reverse a number
- [x] Count digits
- [x] Sum of digits
- [x] `% 10` digit extraction
- [x] `/ 10` digit removal
- [x] Execution tracing
- [x] Common while-loop mistakes
- [x] Debugging loop conditions

---

# Important Takeaways

1. A `while` loop follows:

   ```text
   Initialize → Check → Execute → Update → Check → ...
   ```

2. Always make sure the loop condition can eventually become `false`.

3. For counting iterations, use a counter:

   ```cpp
   while (i <= n)
   ```

4. For processing digits, commonly use:

   ```cpp
   while (num != 0)
   ```

5. Remember:

   ```cpp
   num % 10
   ```

   gets the last digit.

6. Remember:

   ```cpp
   num / 10
   ```

   removes the last digit.

7. For addition, initialize the accumulator with `0`:

   ```cpp
   int sum = 0;
   ```

8. For number reversal, use:

   ```cpp
   rev = rev * 10 + rem;
   ```

9. Execution tracing is useful for understanding exactly how values change during each iteration.

10. The loop condition should match the problem: count iterations when using a counter, and process digits when using `num != 0`.

---

## Striver A2Z Progress 

**Topic: While Loops**

The concepts covered here form the foundation for later DSA topics , especially:

- Array traversal
- Searching
- Counting
- Mathematical problems
- Number manipulation
- Digit-based problems
- Nested iteration
- Time complexity analysis
