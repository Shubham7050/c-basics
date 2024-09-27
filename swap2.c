#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers:\n");
    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
