#ifndef __LIFEFUNCTIONS_H_
#define __LIFEFUNCTIONS_C_
#include <stdio.h>



int accommodationCost(){
    int totalCost; 
    //request total cost of hotels
    printf("How much was the total cost of housing? ");
    scanf("%d",&totalCost); 
    return totalCost; 
}

int calculateBreakfast(int days, int departure, int arrival){
    int companyBreakfast = days;
    //If the time of departure is after 7am, and the time of arrival home is after 8am, both the first day and last day's breakfast is covered by the company
    if(departure < 700 && arrival > 800){
        return days; 
    }
    // if the departure falls past 7pm and the time of arrival home is before 8am, breakfast on the first and last day are not covered by the company. 
    else if(departure >= 700 && arrival <= 800){
        return companyBreakfast -= 2; 
    }
    // if both breakfast were not covered by the company, but both weren't covered by the company, one was covered by the company. 
    else{
        return companyBreakfast -=1 ; 
    }
}
int calculateLunch(int days, int departure, int arrival){
    int companylunch = days;
    // if the departure falls before noon and the time of arrival home is after 1pm, lunch on the first and last day are covered by the company. 
    if(departure < 1200 && arrival > 1300){
        return companylunch;
    }
    // if the departure falls on noon or after and the time of arrival home is before or at 1pm, the company does not cover the lunch for the first and last day. 
    else if(departure >= 1200 && arrival <= 1300){
        return companylunch -= 2;
    }
    // if both lunch were not covered by the company, but both weren't covered by the company, one was covered by the company
    else{
        return companylunch -= 1; 
    }
}
int calculateDinner(int days, int departure, int arrival){
    int companydinner = days;
    // if departure falls before 6pm and the arrival home falls after 7pm, dinner on the first and last day of the trip is covered by the company
    if(departure < 1800 && arrival > 1900){
        return companydinner; 
    }
    // if depareture falls on or after 6pm and the arrival home falls on or before 7pm, dinner on the first and last day of the trip is not covered by the company
    else if(departure >= 1800 && arrival >= 1900){
        return companydinner -= 2; 
    }
    // if both dinner were not covered by the company, but both weren't covered by the company, one was covered by the company
    else{
        return companydinner -= 1; 
    }
}
int companyCoveredFoodCost(int breakfast,int lunch,int dinner){
    int companyCoverPerBreakfast = 9; 
    int companyCoverPerLunch = 12; 
    int companyCoverPerDinner = 16; 
    // Multiply amount of covered Breakfast, Lunch, or Dinner with the company's Allocated business expense per meal per meal type. 
    return (( companyCoverPerBreakfast * breakfast ) + ( companyCoverPerLunch * lunch ) + (companyCoverPerDinner*dinner ));


}

#endif