#include <stdio.h>

void print_fibonacci(int n) {
    int fib1 = 1; // First Fibonacci number
    int fib2 = 2; // Second Fibonacci number

    printf("%d, %d", fib1, fib2); // Print the first two Fibonacci numbers

    for (int i = 3; i <= n; i++) {
        int fib = fib1 + fib2; // Calculate the next Fibonacci number
        printf(", %d", fib); // Print the Fibonacci number
        fib1 = fib2; // Update fib1 to the previous Fibonacci number
        fib2 = fib; // Update fib2 to the current Fibonacci number
    }

    printf("\n"); // Print a new line after printing all Fibonacci numbers
}

int main() {
    int count = 50;

    print_fibonacci(count);

    return 0;
}
