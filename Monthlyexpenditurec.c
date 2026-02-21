/* Print monthly expenditure
   Practical 2, Part 2 (c)
   @author Shirish Maharjan
*/
#include <stdio.h>

int main() {

    float foodExpenses = 250.0;
    float leisureExpenses = 80.0;
    float clothesExpenses = 60.0;
    float accommodationExpenses = 500.0;
    float travelExpenses = 75.0;
    float totalSpent;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses
               + accommodationExpenses + travelExpenses;

    printf("--- Monthly Expenditure Breakdown ---\n");
    printf("Food:          Rs.%.2f\n", foodExpenses);
    printf("Leisure:       Rs.%.2f\n", leisureExpenses);
    printf("Clothes:       Rs.%.2f\n", clothesExpenses);
    printf("Accommodation: Rs.%.2f\n", accommodationExpenses);
    printf("Travel:        Rs.%.2f\n", travelExpenses);
    printf("-------------------------------------\n");
    printf("The total expenditure this month was Rs.%.2f\n\n", totalSpent);

    return 0;
}
