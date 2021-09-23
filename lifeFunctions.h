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
    if(departure<700 && arrival >800){
        return days; 
    }
    // if the departure falls past 7pm and the time of arrival home is before 8am, breakfast on the first and last day are not covered by the business. 
    else if(departure>700 && arrival <800){
        return businessBreakfast-=2; 
    }
    // if both breakfast were not covered by the business, but both weren't covered by the business, one was covered by the business. 
    else{
        return businessBreakfast-=1; 
    }
}
int calculateLunch(int days, int departure, int arrival){
    int businesslunch = days;

}
int calculateDinner(int days, int departure, int arrival){
    int businessdinner = days;
}
#endif