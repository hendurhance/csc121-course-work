// Question: (Even or Odd) Write a program that inputs a series of integers and passes them
// one at a time to function isEven, which uses the remainder operator to determine whether
// an integer is even. The function should take an integer argument and return 1 if the integer
// is even and 0 otherwise.

#include <stdio.h>

int isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int number;

    printf("Enter integers to check if they are even or odd (enter -1 to exit):\n");
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == -1) {
            printf("Exiting program.\n");
            break;  // Using -1 as the termination condition
        }

        if (isEven(number)) {
            printf("%d is Even\n", number);
        } else {
            printf("%d is Odd\n", number);
        }
    }

    return 0;
}
