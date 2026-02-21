/* Print monthly expenditure
   Practical 2, Part 2 (b)
   @author Shirish Maharjan
*/
#include <stdio.h>

int main() {

    float foodExpenses = 250.0;
    float leisureExpenses = 80.0;
    float clothesExpenses = 60.0;
    float totalSpent;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was Rs.%.2f\n\n", totalSpent);

    return 0;
}