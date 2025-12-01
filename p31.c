#include <stdio.h>

int main() {
    int number, digitCount;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Count the digits
    while (number != 0) {
        digitCount++;
        number /= 10;
    }

    printf("The number of digits is: %d\n", digitCount);

    return 0;
}

