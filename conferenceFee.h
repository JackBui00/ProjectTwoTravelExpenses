#ifndef __CONFERENCEFEE_H_
#define __CONFERENCEFEE_C_
#include <stdio.h>

double ConferenceFee(){
    double conference;
    printf("How much was spent on conference or registration fees?");
    scanf("%f", &conference);
    return conference;
}


#endif