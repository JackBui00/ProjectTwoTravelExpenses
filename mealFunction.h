#ifndef __MEALFUNCTION_H_
#define __MEALFUNCTION_C_

double mealExpense() {
	char choice;
	char choice1;
	double mealCost;
	int time;
	int time2;
	double totalCost;
	double total_cost_meal;
	double total_allowable_cost;
	const double allowable_breakfast_cost = 9.00,
                      allowable_lunch_cost= 12.00,
                      allowable_dinner_cost = 16.00;
	printf("\nDid you eat meal on the first day? (Y or N): ");
	scanf("%d", &choice);
	printf("\nWhat time did you eat your meal? ");
	scanf("%d", &time);
	
	printf("\nDid you eat a meal on the last day? (Y or N) ";
    	scanf("%d", choice1);
	printf("\nWhat time did you eat your meal? ");
	scanf("%d", time2); 
}
#endif
