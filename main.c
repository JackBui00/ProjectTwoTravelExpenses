#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transportationFunction.h"
#include "lifeFunctions.h"
#include "airfare.h"
#include "conferenceFee.h"
#include "parkingFee.h"
int main()
{
    printf("Welcome to the Travel Expense Calculator\n");

    int days;
    printf("How many total days were spent on the trip? ");
    scanf("%d", &days);
    // If days are more than one, Collect information
    if (days < 1)
    {
        printf("The total cost was 0.");
        return 0;
    }
    else
    {
        int timeOfDeparture;
        //request time of departure
        printf("What was the time of departure on the first day of the trip? ");
        scanf("%d", &timeOfDeparture);
        //printf("%d", timeOfDeparture);

        int timeOfArrival;
        // request time of arrival
        printf("What was the time of arrival on the last day of the trip? ");
        scanf("%d", &timeOfArrival);
        //printf("%d", timeOfArrival);

        char wasATaxiUsed[10];
        int numberDaysTaxiWasUsed = 0;
        int totalTaxiCost = 0;
        int taxiCompanyCover = 0;
        //request if a taxi was used
        printf("Was a Taxi used? ");
        scanf(" %s", &wasATaxiUsed);
        int result = strcmp("yes", wasATaxiUsed);
        //if a taxi was used, enter the if statement
        if (result == 0)
        {
            printf("How many days of the trip was a taxi taken? ");
            scanf("%d", &numberDaysTaxiWasUsed);
            taxiCompanyCover = numberDaysTaxiWasUsed * 10;
            totalTaxiCost = taxiCost();
        }
        //printf("%d", taxiCompanyCover);
        //printf("%s", wasATaxiUsed);

        char wasAPrivateCarUsed[10];
        int numberDaysRentedVehicleUsed = 0;
        int totalMilesDrivenCost = 0;
        int rentalCarCompanyCover = 0;
        //Request if a rented/private vehicle was used
        printf("Was a rented vehicle used? ");
        scanf("%s", &wasAPrivateCarUsed);
        result = strcmp("yes", wasAPrivateCarUsed);
        //If a private vehicle was rented, enter if statement
        if (result == 0)
        {
            printf("How many days of the trip was a rented vehicle used? ");
            scanf("%d", &numberDaysRentedVehicleUsed);
            rentalCarCompanyCover = numberDaysRentedVehicleUsed * 6;
            totalMilesDrivenCost = privateCarCost();
        }
        //printf("%s", WasAPrivateCarUsed);

        //Housing needs
        int hotelNightsSpent = days - 1;
        int hotelCompanyCover = hotelNightsSpent * 90;
        int totalHotelCost = accommodationCost();

        //conference fees
        int totalConferenceFees = ConferenceFee();
        //Food needs
        int breakfastCost;
        int lunchCost;
        int dinnerCost;
        int breakfastCount = calculateBreakfast(days, timeOfDeparture, timeOfArrival);
        int lunchCount = calculateLunch(days, timeOfDeparture, timeOfArrival);
        int dinnerCount = calculateDinner(days, timeOfDeparture, timeOfArrival);
        int companyMealCover = companyCoveredFoodCost(breakfastCount, lunchCount, dinnerCount);
        printf("How much did you spend on breakfast: ");
        scanf ("%d", &breakfastCost);
        printf("How much did you spend on lunch: ");
        scanf ("%d", &lunchCost);
        printf("How much did you spend on dinner: ");
        scanf ("%d", &dinnerCost);
        int totalMealCost = breakfastCost + lunchCost + dinnerCost;

        //Parking needs
        int numberOfDaysParked;
        int totalParkingCost;
        int companyParkingCover;
        printf("How many days was parking used? ");
        scanf("%d", &numberOfDaysParked);
        companyParkingCover = numberOfDaysParked * 6;
        totalParkingCost = parkingFee();

        //Airfare needs
        int totalAirfareCost = airfareCost();

        //Total Expenses
        int totalExpenses = totalAirfareCost + totalTaxiCost + totalMilesDrivenCost + totalHotelCost + totalConferenceFees + totalParkingCost +totalMealCost; 
        //Total Allowable Expenses
        int companyCover = hotelCompanyCover + rentalCarCompanyCover + taxiCompanyCover + companyParkingCover+ companyMealCover; 
        printf("The allowed expenses for this trip is: %d\n", companyCover);
        int reimbursement;
        int moneySaved;
        //Excess to be reimbursed
        //Amount Saved by the business person

        if (totalExpenses > companyCover)
        {
            reimbursement = totalExpenses - companyCover;
            moneySaved = 0;
        }
        else if (companyCover > totalExpenses)
        {
            moneySaved = companyCover - totalExpenses;
            reimbursement = 0;
        }
        else if (totalExpenses == companyCover)
        {
            moneySaved = 0;
            reimbursement = 0;
        }

        printf("Total reimbursement: %d\n", reimbursement);
        printf("Total money saved: %d\n", moneySaved);
    }
}
