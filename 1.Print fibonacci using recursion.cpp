#include <stdio.h>

// Function to calculate Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series up to a given number of terms
void printFibonacciSeries(int terms) {
    int i;
    printf("Fibonacci Series: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    if (terms <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Exit with error code
    }
    
    printFibonacciSeries(terms);

    return 0;
}
