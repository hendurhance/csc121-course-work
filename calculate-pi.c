// Question: (Calculating the Value of π) Calculate the value of π from the infinite series π = 4
// – 4/3 + 4/5 + 4/7 + 4/9 + 4/11 + ......
// Print a table that shows the value of π approximated by one term of this series, by two terms,
// by three terms, and so on. How many terms of this series do you have to use before you first
// get 3.14? 3.141? 3.1415? 3.14159?

#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0.0;
    int sign = 1;
    int denominator = 1;
    int termCount = 0;
    double term;

    printf("Term\tApproximation of Pi\n");

    // Loop until the desired accuracy is achieved
    while (1) {
        term = 4.0 / denominator * sign;
        pi += term;
        termCount++;
        printf("%d\t%.15f\n", termCount, pi);

        // Check precision goals
        if (fabs(pi - 3.14) < 0.001 || fabs(pi - 3.141) < 0.0001 ||
            fabs(pi - 3.1415) < 0.00001 || fabs(pi - 3.14159) < 0.000001) {
            printf("Reached precision at term %d: %.15f\n", termCount, pi);
            break;
        }

        sign = -sign;
        denominator += 2;
    }

    return 0;
}
