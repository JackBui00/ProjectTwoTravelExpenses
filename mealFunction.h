#ifndef __MEALFUNCTION_H_
#define __MEALFUNCTION_C_

double breakfastCost() {
	double breakfastCost;
	printf("How much did you spand on breakfast? ");
	scanf("%lf", &breakfastCost);
	return breakfastCost;
}
double lunchCost() {
	double lunchCost;
	printf("How much did you spend on lunch? ");
	scanf("%lf", &lunchCost);
	return lunchCost;
}

double dinnerCost() {
	double dinnerCost;
	printf("How much did you spend on dinner? ");
	scanf("%lf", &dinnerCost);
	return dinnerCost;
}
#endif 
