// Question: Research several car-pooling websites. Create an application that calculates your daily
// driving cost, so that you can estimate how much money could be saved by car pooling,
// which also has other advantages such as reducing carbon emissions and reducing traffic
// congestion. The application should input the following information and display the user’s
// cost per day of driving to work:
// a) Total miles driven per day.
// b) Costpergallonofgasoline.
// c) Average miles per gallon.
// d) Parkingfeesperday.
// e) Tolls per day.

#include <stdio.h>

int main() {
    double totalMiles, costPerGallon, milesPerGallon, parkingFees, tolls, fuelCost, dailyDrivingCost;

    // Prompt user to enter total miles driven per day
    printf("Enter total miles driven per day: ");
    scanf("%lf", &totalMiles);

    // Prompt user to enter cost per gallon of gasoline
    printf("Enter cost per gallon of gasoline: ");
    scanf("%lf", &costPerGallon);

    // Prompt user to enter average miles per gallon
    printf("Enter average miles per gallon: ");
    scanf("%lf", &milesPerGallon);

    // Prompt user to enter parking fees per day
    printf("Enter parking fees per day: ");
    scanf("%lf", &parkingFees);

    // Prompt user to enter tolls per day
    printf("Enter tolls per day: ");
    scanf("%lf", &tolls);

    // Calculate fuel cost
    fuelCost = (totalMiles / milesPerGallon) * costPerGallon;

    // Calculate daily driving cost
    dailyDrivingCost = fuelCost + parkingFees + tolls;

    // Print daily driving cost
    printf("Your daily driving cost is: $%.2f\n", dailyDrivingCost);

    return 0;
}
