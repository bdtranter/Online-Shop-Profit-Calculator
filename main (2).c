/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    double price;
    double total = 0; // Initialize total to zero
    double expenses;
    double shipping;
    double federalTaxRate; //fed tax rate to be determined
    double stateTaxRate = 0.05;  // Default state tax rate, integrate later

    printf("Online Shop Profit Calculator\n");

    // Ask the user for their estimated federal tax rate
    double annualIncome;
    printf("Enter your estimated federal tax rate: ex: 0.2 = 20 percent\n");
    scanf("%lf", &federalTaxRate);
    while (1) { // Infinite loop until a negative price is entered
        printf("Enter price of item sold (or a negative number to exit):\n$");
        scanf("%lf", &price);

        if (price < 0) {
            break; // Exit the loop if a negative price is entered
        }

        printf("Enter total expenses:\n$");
        scanf("%lf", &expenses);
        printf("Enter shipping fee:\n$");
        scanf("%lf", &shipping);

        double profit = price - expenses - shipping;
        double federalTax = profit * federalTaxRate;
        //double stateTax = profit * stateTaxRate;

        double taxableProfit = profit - federalTax;
        total += taxableProfit; // Accumulate total profit
    }

    printf("\nTotal profits after federal taxes are $%.2lf\n", total);
    
    return 0;
    
    /* in progress: 
    
    Ask the user for their state
    char state[50];
    printf("Enter your state: ");
    scanf("%s", state);

    // Assign state tax rate based on the state entered
    if (strcmp(state, "California") == 0) {
        stateTaxRate = 0.07;
    } // Add more states and rates as needed
    
    */

    
}


