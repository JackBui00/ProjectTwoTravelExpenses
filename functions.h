#ifndef FUNCTIONS_h
#define FUNCTIONS_h

//Returns total money value of airfare cost
int airfareCost();
//Returns total money value of Conference Fees
double ConferenceFee();
//Returns the total money cost of housing
int accommodationCost();
//Returns the amount of breakfast meals covered by the company 
int calculateBreakfast(int days, int departure, int arrival);
//Returns the total money cost of breakfast
int breakfastCost();
//Returns the amount of lunch meals covered by company 
int calculateLunch(int days, int departure, int arrival);
//Return total money cost of Lunch 
int lunchCost();
//Return the amount of dinners meals covered by company 
int calculateDinner(int days, int departure, int arrival);
//Return total money cost of dinner 
int dinnerCost();
//Return Total money cost of food that is covered by company 
int companyCoveredFoodCost(int breakfast,int lunch,int dinner);
//Return total money cost of taxi services 
double taxiCost();
//Return total money cost of driving Private vehicle based on milage 
double privateCarCost();
//Return total money cost of parking 
int parkingFee ();



#endif