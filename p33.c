// WAP to calculate of reverse number

#include <stdio.h>

int main() {
    int number, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number>0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }


    printf("The reversed number is %d", reverse);

    return 0;
}

