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
    int businessBreakfast = days;
    //If the time of departure is after 7am, and the time of arrival home is after 8am, both the first day and last day's breakfast is covered by the business
    if(departure < 700 && arrival > 800){
        return days; 
    }
    // if the departure falls past 7pm and the time of arrival home is before 8am, breakfast on the first and last day are not covered by the business. 
    else if(departure >= 700 && arrival <= 800){
        return businessBreakfast -= 2; 
    }
    // if both breakfast were not covered by the business, but both weren't covered by the business, one was covered by the business. 
    else{
        return businessBreakfast -=1 ; 
    }
}
int calculateLunch(int days, int departure, int arrival){
    int businesslunch = days;
    // if the departure falls before noon and the time of arrival home is after 1pm, lunch on the first and last day are covered by the business. 
    if(departure < 1200 && arrival > 1300){
        return businesslunch;
    }
    // if the departure falls on noon or after and the time of arrival home is before or at 1pm, the business does not cover the lunch for the first and last day. 
    else if(departure >= 1200 && arrival <= 1300){
        return businesslunch -= 2;
    }
    // if both lunch were not covered by the business, but both weren't covered by the business, one was covered by the business
    else{
        return businesslunch -= 1; 
    }
}
int calculateDinner(int days, int departure, int arrival){
    int businessdinner = days;
    // if departure falls before 6pm and the arrival home falls after 7pm, dinner on the first and last day of the trip is covered by the business
    if(departure < 1800 && arrival > 1900){
        return businessdinner; 
    }
    // if depareture falls on or after 6pm and the arrival home falls on or before 7pm, dinner on the first and last day of the trip is not covered by the business
    else if(departure >= 1800 && arrival >= 1900){
        return businessdinner -= 2; 
    }
    // if both dinner were not covered by the business, but both weren't covered by the business, one was covered by the business
    else{
        return businessdinner -= 1; 
    }
}
#endif