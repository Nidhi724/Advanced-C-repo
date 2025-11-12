# 🧮 Command Line Calculator (C Language)

This is a simple yet powerful **Command Line Calculator** written in **C**.  
It allows users to perform basic arithmetic, power, square root, and trigonometric calculations directly from the terminal.

---

## 🚀 Features

- **Basic Arithmetic Operations**
  - Addition (+)
  - Subtraction (−)
  - Multiplication (×)
  - Division (÷)
  - Modulus (%)

- **Power Function**
  - Calculates `x^y` using the `pow()` function.

- **Square Root**
  - Computes the square root of a given number using `sqrt()`.

- **Trigonometric Functions**
  - Calculates `sin(x)`, `cos(x)`, and `tan(x)` for angles in degrees.

---

## 🧩 How It Works

1. When the program starts, it displays a menu:

2. The user selects an operation type (1–4).

3. Based on the choice:
- For **basic arithmetic**, you enter an expression like `8 + 4`.
- For **power**, you enter base and exponent (e.g., `2 3`).
- For **square root**, you enter one number.
- For **trigonometric functions**, you enter an angle in degrees.

4. The program computes and displays the result.

---

## 🧠 Concepts Used

- Conditional statements (`switch`, `case`)
- Math library functions: `pow()`, `sqrt()`, `sin()`, `cos()`, `tan()`
- Type casting (`(int)` for modulus)
- Input and output using `scanf()` and `printf()`

---

## ⚙️ Requirements

- GCC compiler  
- `<math.h>` library for mathematical operations

---

## 🧾 How to Run

### 🖥️ Compile the code:
```bash
gcc calculator.c -o calculator -lm


OUTPUT

=== COMMAND LINE CALCULATOR ===
Choose the type of operation:
1. Basic Arithmetic (+, -, *, /, %)
2. Power (x^y)
3. Square Root (√x)
4. Trigonometric Functions (sin, cos, tan)
Enter your choice (1-4): 1

Enter an expression (e.g., 8 + 4): 8 + 4
Result: 12.00

Thank you for using the calculator!
