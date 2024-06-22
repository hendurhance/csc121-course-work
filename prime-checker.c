// Question: A prime number is any natural number greater than 1 that is divisible only by 1
// and by itself. Write a C program that reads an integer and determines whether it is a prime
// number or not.

#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter an integer to check if it's a prime number: ");
    scanf("%d", &num);

    // Check for non-prime conditions
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0; // Early exit for numbers less than 2
    }

    // Check divisibility from 2 to num/2
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output results based on prime status
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
