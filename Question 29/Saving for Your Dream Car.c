#include <stdio.h>
#include <math.h>

int main()
{
    double monthlySalary = 25000;
    double dreamCarCost = 4000000;
    double downPayment = 500000;
    double yearlyHikePercentage = 0.07; // 7% expressed as a decimal
    double savingsPercentage = 0.2;     // You decide to save 20% of your monthly salary

    double currentSavings = 0;
    int monthsWorked = 0;

    while (currentSavings < downPayment)
    {
        // Calculate savings for this month
        double savingsThisMonth = monthlySalary * savingsPercentage;

        // Add savings to current savings
        currentSavings += savingsThisMonth;

        // Check if 12 months have passed to apply the yearly hike
        if (monthsWorked % 12 == 0)
        {
            monthlySalary *= (1 + yearlyHikePercentage); // Apply yearly hike
        }

        // Increment the number of months worked
        monthsWorked++;
    }

    printf("You need to work for %d months to reach the down payment.\n", monthsWorked);
    return 0;
}
