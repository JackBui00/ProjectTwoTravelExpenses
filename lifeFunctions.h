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
    if(departure<700 && arrival >800){
        return days; 
    }
    else if(departure>700 && arrival <800){
        return businessBreakfast-=2; 
    }
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