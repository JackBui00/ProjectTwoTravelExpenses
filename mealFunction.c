#include "functions.h"
#include <stdio.h>

int breakfastCost() {
	int breakfastCost;
	printf("How much did you spand on breakfast? ");
	scanf("%d", &breakfastCost);
	if(breakfastCost>0){
		return breakfastCost;
	}
	return 0; 
	
}
int lunchCost() {
	int lunchCost;
	printf("How much did you spend on lunch? ");
	scanf("%d", &lunchCost);
	if(lunchCost>0){
		return lunchCost;
	}
	return 0; 
	
}

int dinnerCost() {
	int dinnerCost;
	printf("How much did you spend on dinner? ");
	scanf("%d", &dinnerCost);
	if(dinnerCost>0){
		return dinnerCost;
	}
	return 0; 
	
}

