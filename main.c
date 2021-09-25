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
        int taxiCompanyCover = 0; 
        //request if a taxi was used
        printf("Was a Taxi used?");
        scanf(" %s",&wasATaxiUsed);
        int result = strcmp("yes", wasATaxiUsed);
        //if a taxi was used, enter the if statement
        if(result == 0){
            printf("How many days of the trip was a taxi taken? ");
            scanf("%d",&numberDaysTaxiWasUsed);
            taxiCompanyCover = numberDaysTaxiWasUsed * 10; 
            totalTaxiCost = taxiCost(); 
        }
        //printf("%d", taxiCompanyCover);
        //printf("%s", wasATaxiUsed); 

        char wasAPrivateCarUsed[10]; 
        int numberDaysRentedVehicleUsed=0;
        int totalMilesDrivenCost = 0; 
        int rentalCarCompanyCover = 0; 
        //Request if a rented/private vehicle was used
        printf("Was a rented vehicle used? ");
        scanf("%s",&wasAPrivateCarUsed); 
        result = strcmp("yes", wasAPrivateCarUsed);
        //If a private vehicle was rented, enter if statement 
        if (result ==0){
            printf("How many days of the trip was a rented vehicle used? ");
            scanf("%d", &numberDaysRentedVehicleUsed);
            rentalCarCompanyCover = numberDaysRentedVehicleUsed *6; 
            totalMilesDrivenCost = privateCarCost(); 
        }
        //printf("%s", WasAPrivateCarUsed); 

        //Housing needs 
        int hotelNightsSpent = days-1; 
        int hotelCompanyCover = days*90;  
        int totalHotelCost = accommodationCost(); 

        //Food needs
        double total_meal_cost;
        if (choice =='Y' || choice == 'y')
	    {
		printf("How much was your meal? ");
		mealCost = inputValidate(mealCost, 0);
		total_meal_cost = mealCost;

		if(time < 7)
        		{
			if (mealCost > allowable_breakfast_cost) // 15 > 9 = 6.00
                			total_meal_cost = mealCost - allowable_breakfast_cost;

			else if (mealCost <= allowable_breakfast_cost) // 5 < 9 
                			total_meal_cost = allowable_breakfast_cost - mealCost ; //saving 
            
		}
		
		else if (time >= 7 && time < 12)
        		{
            		total_allowable_cost = allowable_lunch_cost;

            		if (mealCost > allowable_lunch_cost) // 14 > 12 = $2.00
				total_remaining = mealCost - allowable_lunch_cost;

            		else if (mealCost <= allowable_lunch_cost) // 10 < 12 = 2
                			total_meal_cost = allowable_lunch_cost - mealCost;

        		}
		else if (time >= 12 && time < 18)
        		{
            		total_allowable_cost = allowable_dinner_cost;

            		if (meal_fee > allowable_dinner_cost)
                			total_meal_cost = mealCost - allowable_dinner_cost;

            		else if (mealCost <= allowable_dinner_cost)
                			total_meal_cost = allowable_dinner_cost - mealCost;
        		}

        		else if (departure_time >= 18)
            		total_meal_cost = mealCost;
	} 
	
	if (choice1 == 'Y' || choice1 == 'y')
    	{
		printf("\nHow much was your meal? ");
        		scanf("%d", mealCost);

        		totalCost = mealCost;

        		if(time2 <= 8)
            		total_meal_cost = mealCost;

        		else if(time2 > 8 && time2 <= 13)
        		{
            		total_allowable_cost = allowable_breakfast_cost;

            		if (mealCost> allowable_breakfast_cost)
                			total_meal_cost = mealCost - allowable_breakfast_cost;

            		else if (mealCost <= allowable_breakfast_cost)
                			total_meal_cost = mealCost;
        		}

       		else if (time2 > 13 && time2 <= 19)
        		{
            		total_allowable_cost = allowable_lunch_cost;

            		if (mealCost > allowable_lunch_cost) // 13.00 > 12.00 == 1.00
                			total_meal_cost = mealCost - allowable_lunch_cost;

            		else if (mealCost <= allowable_lunch_cost)
                			total_meal_cost = mealCost; // 12.00 < n;
        		}

        		else if (arrival_time > 19)
        		{
            		total_allowable_cost += allowable_dinner_cost;
            		if (mealCost > allowable_dinner_cost)
                			total_meal_cost = mealCost - allowable_dinner_cost;

            		else if (mealCost<= allowable_dinner_cost)
                			total_meal_cost = mealCost;
        		}
        total_meal_cost = mealExpense();    
    }






        
    }
    
}
