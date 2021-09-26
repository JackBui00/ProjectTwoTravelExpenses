
#include <stdio.h>
#include "functions.h"
int airfareCost(){
    
    //asks and returns the total cost of airfare
    int airfareCost;
    printf("How much was spent on airfare: ");
    scanf("%d", &airfareCost);
    if(airfareCost>0){
        return airfareCost;
    }
    return 0; 
    

}




