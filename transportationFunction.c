#include "functions.h"
#include <stdio.h>

double privateCarCost(){
    int miles; 
    //request how many miles were driven 
    printf("How many miles were driven in the rented vehicle? ");
    scanf("%d", &miles);
        if(miles>0){
            double privateCarTotal;
            //Muliplies miles by cost per mile 
            privateCarTotal = (miles * .27);
            return privateCarTotal;  
        }
    return 0; 
}
double taxiCost(){
    double taxiCost; 
    //request total cost of taxi services 
    printf("How much was the total cost of the taxi services? ");
    scanf("%lf", &taxiCost); 
    if(taxiCost>0){
        return taxiCost;
    }
    return 0; 
}
