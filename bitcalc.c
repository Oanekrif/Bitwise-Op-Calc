#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;    // Find carry bits
        a = a ^ b;            // Sum bits without carry
        b = carry << 1;       // Shift carry to the left
    }
    return a;
}
int subtract(int a, int b) {
    return add(a, add(~b, 1)); // a - b = a + (-b)
}
int multiply(int a, int b) {
    int result = 0;
    while (b != 0) {
        if (b & 1) {          // If the least significant bit of b is 1
            result = add(result, a);
        }
        a = a << 1;           // Shift a to the left (multiply by 2)
        b = b >> 1;           // Shift b to the right (divide by 2)
    }
    return result;
}
int divide(int dividend, int divisor) {
    int result = 0;
    int negative = 0;

    if (dividend < 0) {
        dividend = add(~dividend, 1);  // Make positive
        negative = !negative;
    }
    if (divisor < 0) {
        divisor = add(~divisor, 1);  // Make positive
        negative = !negative;
    }

    for (int i = 7; i >= 0; i--) {
        if ((dividend >> i) >= divisor) {
            dividend = subtract(dividend, divisor << i);
            result = result | (1 << i);
        }
    }

    return negative ? add(~result, 1) : result;
}
int main(){
    printf("Addition: %d\n", add(5, 3));         // Output: 8
    printf("Subtraction: %d\n", subtract(10, 4)); // Output: 6
    printf("Multiplication: %d\n", multiply(4, 3)); // Output: 12
    printf("Division: %d\n", divide(15, 3));     // Output: 5
    return 0;
}