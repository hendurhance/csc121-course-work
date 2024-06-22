// Question: Write a program that demonstrates the difference between preincrementing and
// postincrementing using the increment operator ++

#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial value of x: %d\n", x);

    // Using postincrement (x++)
    x++;
    printf("Value after postincrement: %d\n", x);

    // Resetting x to its initial value
    x = 5;
    printf("\nValue of x after reset: %d\n", x);

    // Using preincrement (++x)
    ++x;
    printf("Value after preincrement: %d\n", x);

    return 0;
}
