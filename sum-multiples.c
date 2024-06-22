// Quesiom: (Calculating the Sum of Multiples) Write a program to calculate and print the
// sum of all multiples of 7 from 1 to 100.

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 7;

    // Loop through multiples of 7 from 7 to 100
    while (i <= 100) {
        sum += i;  // Add the multiple to the sum
        i += 7;    // Move to the next multiple of 7
    }

    // Print the sum of all multiples of 7 from 1 to 100
    printf("The sum of all multiples of 7 from 1 to 100 is: %d\n", sum);

    return 0;
}
