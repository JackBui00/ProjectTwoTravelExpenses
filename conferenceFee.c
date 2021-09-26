#include "functions.h"
#include <stdio.h>

double ConferenceFee(){
    double conference;
    printf("How much was spent on conference or registration fees?");
    scanf("%lf", &conference);
    if(conference>0){
        return conference;
    }
    return 0; 
    
}