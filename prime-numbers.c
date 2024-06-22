// Question: (Prime Numbers) Write a program to calculate and print a list of all prime
// numbers from 1 to 100.

#include <stdio.h>

int main()
{
    int isPrime, i, num;

    // Loop through each number from 2 to 100
    for (num = 2; num <= 100; num++)
    {
        isPrime = 1; // Assume num is prime

        // Check divisibility from 2 to num-1
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // num is not prime
                break;
            }
        }

        // If num is prime, print it
        if (isPrime)
        {
            printf("%d ", num);
        }
    }
    printf("\n"); // Move to the next line after printing all primes

    return 0;
}
