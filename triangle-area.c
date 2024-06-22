// Question: (Sides of a Triangle) Write a function that reads three nonzero double values as
// the sides of a triangle, and calculates and returns the area of the triangle as a double
// variable. It should also check whether the numbers represent the sides of a triangle before
// calculating the area. Use this function in a program that inputs a series of sets of numbers.
// Triangle Side 1 Side 2
// 1 3.0 8.0
// 2 5.0 12.0
// 3 8.0 15.0

#include <stdio.h>
#include <math.h>
double calculateArea(double side1, double side2, double side3)
{
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        double semiperimeter = (side1 + side2 + side3) / 2;
        double area = sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3));
        return area;
    }
    else
    {
        printf("Invalid triangle sides.\n");
        return 0;
    }
}
int main()
{
    double side1, side2, side3, area;
    while (1){ // Infinite loop, break it to stop the program manually or modify as needed
        printf("Enter the sides of the triangle (or negative number to exit): ");
        scanf("%lf %lf %lf", &side1, &side2, &side3);
        if (side1 < 0 || side2 < 0 || side3 < 0)
            break; // Negative number to exit
        area = calculateArea(side1, side2, side3);
        if (area > 0)
        {
            printf("The area of the triangle is: %.2f\n", area);
        }
    }
    return 0;
}