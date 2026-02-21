/* Print monthly expenditure using keyboard input
   Practical 2, Part 2 (d)
   @author Shirish Maharjan
*/
#include <stdio.h>

int main() {

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float accommodationExpenses;
    float travelExpenses;
    float totalSpent;

    printf("=== Monthly Expenditure Calculator ===\n\n");

    printf("Enter food expenses: ");
    scanf(" %f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf(" %f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf(" %f", &clothesExpenses);

    printf("Enter accommodation expenses: ");
    scanf(" %f", &accommodationExpenses);

    printf("Enter travel expenses: ");
    scanf(" %f", &travelExpenses);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses
               + accommodationExpenses + travelExpenses;

    printf("\n--- Monthly Expenditure Breakdown ---\n");
    printf("Food:          Rs.%.2f\n", foodExpenses);
    printf("Leisure:       Rs.%.2f\n", leisureExpenses);
    printf("Clothes:       Rs.%.2f\n", clothesExpenses);
    printf("Accommodation: Rs.%.2f\n", accommodationExpenses);
    printf("Travel:        Rs.%.2f\n", travelExpenses);
    printf("-------------------------------------\n");
    printf("The total expenditure this month was Rs.%.2f\n\n", totalSpent);

    return 0;
}