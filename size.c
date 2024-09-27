#include <stdio.h>

int main() {
    // Variables to hold sizes
    size_t intSize, floatSize, charSize;

    // Get sizes using sizeof operator
    intSize = sizeof(int);
    floatSize = sizeof(float);
    charSize = sizeof(char);

    // Display the sizes
    printf("Size of int: %zu bytes\n", intSize);
    printf("Size of float: %zu bytes\n", floatSize);
    printf("Size of char: %zu byte\n", charSize);

    return 0;
}
