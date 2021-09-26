#include <stdio.h>
#include "functions.h"

int parkingFee (){

    int parking;
    printf("How much was paid for parking? ");
    scanf("%d", &parking);
    if(parking>0){
        return parking;
    }
    return 0; 
    

}