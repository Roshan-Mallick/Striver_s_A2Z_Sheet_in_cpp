# Bitwise Operators in C++

Bitwise operators work directly on the individual bits of integer values.

---

## 1. Bitwise AND `&`

```cpp
// & → Bitwise AND: operates on the individual bits of integer values.

// 1 & 1 → 1
// 1 & 0 → 0
// 0 & 1 → 0
// 0 & 0 → 0
```

The result is `1` only when both corresponding bits are `1`.

Example:

```text
5 = 0101
3 = 0011

    0101
  & 0011
  ------
    0001

Result = 1
```

A common use is checking whether a number is odd or even:

```cpp
num & 1
```

---

## 2. Bitwise OR `|`

```cpp
// | → Bitwise OR: operates on the individual bits of integer values.

// 1 | 1 → 1
// 1 | 0 → 1
// 0 | 1 → 1
// 0 | 0 → 0
```

The result is `1` when at least one corresponding bit is `1`.

Example:

```text
5 = 0101
3 = 0011

    0101
  | 0011
  ------
    0111

Result = 7
```

OR can be used to set a bit to `1`.

For example:

```cpp
num | 1
```

sets the last bit to `1`.

---

## 3. Bitwise XOR `^`

```cpp
// ^ → Bitwise XOR: operates on the individual bits of integer values.

// 1 ^ 1 → 0
// 1 ^ 0 → 1
// 0 ^ 1 → 1
// 0 ^ 0 → 0
```

The result is `1` when the corresponding bits are different.

Example:

```text
5 = 0101
3 = 0011

    0101
  ^ 0011
  ------
    0110

Result = 6
```

When using:

```cpp
num ^ 1
```

the last bit is flipped.

```text
Even → becomes odd
Odd  → becomes even
```

---

## 4. Bitwise NOT `~`

```cpp
// ~ → Bitwise NOT: operates on the individual bits of an integer and flips each bit.

// 0 becomes 1
// 1 becomes 0
```

Example:

```text
5 = 00000101

~5

00000101
11111010
```

For signed integers using two's complement:

```text
~num = -(num + 1)
```

Therefore:

```text
~5 = -6
```

---

## 5. Left Shift `<<`

```cpp
// << → Left Shift: moves the bits of an integer to the left.

// Shifting left by 1 position is equivalent to multiplying by 2.
```

Example:

```text
5 = 0101

5 << 1

0101
1010

Result = 10
```

Generally:

```text
num << n ≈ num × 2ⁿ
```

Example:

```text
5 << 1 → 10
5 << 2 → 20
5 << 3 → 40
```

---

## 6. Right Shift `>>`

```cpp
// >> → Right Shift: moves the bits of an integer to the right.

// Shifting right by 1 position is equivalent to dividing by 2.
```

Example:

```text
8 = 1000

8 >> 1

1000
0100

Result = 4
```

For non-negative integers:

```text
num >> n ≈ num / 2ⁿ
```

Example:

```text
8 >> 1 → 4
8 >> 2 → 2
8 >> 3 → 1
```

---

## Quick Summary

| Operator | Name | Basic Idea |
|---|---|---|
| `&` | Bitwise AND | Both bits must be `1` |
| `|` | Bitwise OR | At least one bit is `1` |
| `^` | Bitwise XOR | Different bits produce `1` |
| `~` | Bitwise NOT | Flips every bit |
| `<<` | Left Shift | Moves bits left |
| `>>` | Right Shift | Moves bits right |

### Easy Way to Remember

```text
&  → Check / keep bits
|  → Set bits ON
^  → Flip bits
~  → Flip ALL bits
<< → Shift left
>> → Shift right
```
