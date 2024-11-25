# 🧮 Simple Calculator Using Bitwise Operations in C</br></br></br>



## 📋 Project Description:
This project implements a basic calculator in C, performing addition, subtraction, multiplication, and division using bitwise operations. The code demonstrates how fundamental arithmetic operations can be achieved without standard arithmetic operators, relying instead on bit manipulation techniques.</br>

## 🛠️ Key Features:
• Addition: Implements addition using bitwise AND, XOR, and shift operations.</br>
• Subtraction: Uses addition and bitwise negation to perform subtraction.</br>
• Multiplication: Simulates multiplication using bit shifts and repeated addition.</br>
• Division: Implements integer division through bit shifts and subtraction.</br>

## 🌐 Functions Explained:
1. add(int a, int b)
Performs addition using bitwise operations:</br>
• XOR (^) computes the sum without carrying.</br>
• AND (&) identifies carry bits.</br>
• Left shift (<<) moves carry bits to their correct position.</br>

2. subtract(int a, int b)
Performs subtraction by adding the complement of b to a:</br>
• Uses the formula a - b = a + (-b).</br>
• The two's complement (~b + 1) negates b.</br>

4. multiply(int a, int b)
Implements multiplication by:</br>
• Checking each bit of b.</br>
• Adding a to the result when a bit is set.</br>
• Using bit shifts to double a and halve b iteratively.</br>

4. divide(int dividend, int divisor)
Simulates integer division:</br>
• Handles both positive and negative numbers.</br>
• Uses bitwise shifts to approximate division by subtraction.</br>
• Accumulates the quotient bit-by-bit.</br>

## 🎯 Example Usage
The main() function demonstrates the calculator with various operations:

    ```
    printf("Addition: %d\n", add(5, 3));            // Output: 8 
    printf("Subtraction: %d\n", subtract(10, 4));   // Output: 6 
    printf("Multiplication: %d\n", multiply(4, 3)); // Output: 12 
    printf("Division: %d\n", divide(15, 3));        // Output: 5 

## 🚀 How to Run:
1. Clone the repository:
    ```bash
   git clone https://github.com/Oanekrif/Bitwise-Op-Calc.git
3. Navigate to the project directory:
    ```bash
   cd Bitwise-Op-Calc
4. compile the code:
    ```bash
   gcc bitcalc.c -o main
5. Run the executable:
    ```bash
   ./main

## 🧑‍💻 This project demonstrates:

• Practical applications of bitwise operations.</br>
• Implementing arithmetic functions without built-in operators.</br>
• Understanding binary number manipulation.</br>
