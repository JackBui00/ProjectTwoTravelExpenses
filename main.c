#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transportationFunction.h"
#include "lifeFunctions.h"
int main(){
    printf("Welcome to the Travel Expense Calculator\n");
    
    int days; 
    printf("How many total days were spent on the trip? ");
    scanf("%d", &days); 
    // If days are more than one, Collect information
    if(days <1){
        printf("The total cost was 0.");
        return 0; 
    }
    else{
        int timeOfDeparture;
        //request time of departure 
        printf("What was the time of departure on the first day of the trip? ");
        scanf("%d",&timeOfDeparture);
        //printf("%d", timeOfDeparture);

        int timeOfArrival;
        // request time of arrival 
        printf("What was the time of arrival on the last day of the trip? ");
        scanf("%d",&timeOfArrival);
        //printf("%d", timeOfArrival);

        char wasATaxiUsed[10];
        int numberDaysTaxiWasUsed = 0; 
        int totalTaxiCost = 0; 
        int taxiBusinessCover = 0; 
        //request if a taxi was used
        printf("Was a Taxi used?");
        scanf(" %s",&wasATaxiUsed);
        int result = strcmp("yes", wasATaxiUsed);
        //if a taxi was used, enter the if statement
        if(result == 0){
            printf("How many days of the trip was a taxi taken? ");
            scanf("%d",&numberDaysTaxiWasUsed);
            taxiBusinessCover = numberDaysTaxiWasUsed * 10; 
            totalTaxiCost = taxiCost(); 
        }
        //printf("%d", taxiBusinessCover);
        //printf("%s", wasATaxiUsed); 

        char wasAPrivateCarUsed[10]; 
        int numberDaysRentedVehicleUsed=0;
        int totalMilesDrivenCost = 0; 
        int rentalCarBusinessCover = 0; 
        //Request if a rented/private vehicle was used
        printf("Was a rented vehicle used? ");
        scanf("%s",&wasAPrivateCarUsed); 
        result = strcmp("yes", wasAPrivateCarUsed);
        //If a private vehicle was rented, enter if statement 
        if (result ==0){
            printf("How many days of the trip was a rented vehicle used? ");
            scanf("%d", &numberDaysRentedVehicleUsed);
            rentalCarBusinessCover = numberDaysRentedVehicleUsed *6; 
            totalMilesDrivenCost = privateCarCost(); 
        }
        //printf("%s", WasAPrivateCarUsed); 

        //Housing needs 
        int hotelNightsSpent = days-1; 
        int hotelBusinessCover = days*90;  
        int totalHotelCost = accommodationCost(); 

        //Food needs




        
    }
    
}
