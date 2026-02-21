/* Print monthly expenditure - accommodation as constant, secure input handling
   Practical 2, Part 2 (e) + Part 3
   @author Shirish Maharjan

   SECURE PROGRAMMING IMPROVEMENTS (Part 3):
   -----------------------------------------
   Issue 1: scanf() with %f does not validate input - if the user types a
             letter instead of a number, scanf() fails silently and leaves
             the variable uninitialised, producing garbage output.
   Fix 1:   We check the return value of scanf(). scanf() returns the number
             of items successfully read. If it does not return 1, the input
             was invalid and we print an error and exit.

   Issue 2: Negative values are meaningless for expenses but scanf() accepts
             them without complaint, silently corrupting results.
   Fix 2:   After each successful read we validate that the value is >= 0.
             If not, we print an error message and exit.

   Issue 3: The accommodation amount was a magic literal scattered through
             the code, making it easy to forget to update every occurrence.
   Fix 3:   ACCOMMODATION is defined as a named constant using const int,
             so there is a single point of change and the intent is clear.
*/

#include <stdio.h>
#include <stdlib.h>

const int ACCOMMODATION = 500;

int main() {

    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent;

    printf("=== Monthly Expenditure Calculator ===\n");
    printf("(Accommodation is fixed at Rs.%d)\n\n", ACCOMMODATION);

    printf("Enter food expenses: ");
    if (scanf(" %f", &foodExpenses) != 1) {
        printf("Error: invalid input for food expenses.\n");
        exit(1);
    }
    if (foodExpenses < 0) {
        printf("Error: expenses cannot be negative.\n");
        exit(1);
    }

    printf("Enter leisure expenses: ");
    if (scanf(" %f", &leisureExpenses) != 1) {
        printf("Error: invalid input for leisure expenses.\n");
        exit(1);
    }
    if (leisureExpenses < 0) {
        printf("Error: expenses cannot be negative.\n");
        exit(1);
    }

    printf("Enter clothes expenses: ");
    if (scanf(" %f", &clothesExpenses) != 1) {
        printf("Error: invalid input for clothes expenses.\n");
        exit(1);
    }
    if (clothesExpenses < 0) {
        printf("Error: expenses cannot be negative.\n");
        exit(1);
    }

    printf("Enter travel expenses: ");
    if (scanf(" %f", &travelExpenses) != 1) {
        printf("Error: invalid input for travel expenses.\n");
        exit(1);
    }
    if (travelExpenses < 0) {
        printf("Error: expenses cannot be negative.\n");
        exit(1);
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses
               + (float)ACCOMMODATION + travelExpenses;

    printf("\n--- Monthly Expenditure Breakdown ---\n");
    printf("Food:          Rs.%.2f\n", foodExpenses);
    printf("Leisure:       Rs.%.2f\n", leisureExpenses);
    printf("Clothes:       Rs.%.2f\n", clothesExpenses);
    printf("Accommodation: Rs.%d (fixed)\n", ACCOMMODATION);
    printf("Travel:        Rs.%.2f\n", travelExpenses);
    printf("-------------------------------------\n");
    printf("The total expenditure this month was Rs.%.2f\n\n", totalSpent);

    return 0;
}