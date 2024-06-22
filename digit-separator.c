// Question: Write a program that inputs one five-digit number, sep- arates the number into its
// individual digits and prints the digits separated from one another by three spaces each.
// [Hint: Use combinations of integer division and the remainder operation.] For exam- ple, if
// the user types in 42139, the program should print

#include <stdio.h>
#include <string.h>

int main() {
    char number[6];  // Array to store the number as a string (5 digits + null terminator)

    // Prompt user to enter a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%5s", number);  // Read a 5-character string

    // Extracting each digit from the string
    int digit1 = number[0] - '0';  // Convert character to integer
    int digit2 = number[1] - '0';
    int digit3 = number[2] - '0';
    int digit4 = number[3] - '0';
    int digit5 = number[4] - '0';

    // Print digits separated by three spaces
    printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}
