#ifndef __TRANSPORTATIONFUNCTION_H_
#define __TRANSPORTATIONFUNCTION_C_

double privateCarCost(){
    int miles; 
    //request how many miles were driven 
    printf("How many miles were driven in the rented vehicle? ");
    scanf("%d", &miles);
    double privateCarTotal;
    //Muliplies miles by cost per mile 
    privateCarTotal = (miles * .27);
    return privateCarTotal;  
}
double taxiCost(){
    double taxiCost; 
    //request total cost of taxi services 
    printf("How much was the total cost of the taxi services? ");
    scanf("%lf", &taxiCost); 
    return taxiCost; 
}
#endif