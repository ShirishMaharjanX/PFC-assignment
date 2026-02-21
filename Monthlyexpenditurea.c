/* Print monthly expenditure
   Practical 2, Part 2 (a)
   @author Shirish Maharjan
*/
#include <stdio.h>

int main() {

    //define variables and assign values to them
    float foodExpenses = 300.0;      //variable for food expenses
    float leisureExpenses = 100.0;   //assign 100.0 to leisureExpenses
    float clothesExpenses = 50.0;
    float totalSpent;                //variable for total expenses

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was Rs.%.2f\n\n", totalSpent);

    return 0;
}