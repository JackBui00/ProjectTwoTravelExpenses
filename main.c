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
        printf("Was a Taxi used?");
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

        //Parking needs
        int numberOfDaysParked;
        int totalParkingCost;
        int companyParkingCover;
        printf("How many days was parking used? ");
        scanf("%d", &numberOfDaysParked);
        companyParkingCover = numberOfDaysParked * 6;
        totalParkingCost = parkingFee();

        // char allowable_breakfast_cost[9];
        // int totalbreakfastCost = 0;
        // int paid_by_employee = 0;
        // printf("Do you eat breakfast?(Y/N) ) ");
        // scanf("%s", &allowable_breakfast_cost);
        // int result1 = strcmp("yes", allowable_breakfast_cost);

        // if (result1 == 0)
        // {
        //     printf("How much was your breakfast? ");
        //     scanf("%d", &breakfast_cost);
        //     paid_by_employee = breakfastCost - 9;
        //     totalbreakfastCost = breakfastCost();
        // }
        // char allowable_lunch_cost[12];
        // int totallunchCost = 0;
        // int paidByEmployee = 0;
        // printf("Do you eat lunch on the first day?(Y/N) )");
        // scanf("%s", &allowable_lunch_cost);
        // int result2 = strcmp("yes", allowable_lunch_cost);

        // if (result2 == 0)
        // {
        //     printf("How much was your breakfast? ");
        //     scanf("%d", &breakfast_cost);
        //     paidByEmployee = breakfastCost - 9;
        //     totalbreakfastCost = breakfastCost();
        // }
        // char allowable_dinner_cost[16];
        // int totaldinnerCost = 0;
        // int employeePaid = 0;
        // printf("Do you eat dinner?(Y/N) )");
        // scanf("%s", &allowable_dinner_cost);
        // int result3 = strcmp("yes", allowable_dinner_cost);

        // if (result3 == 0)
        // {
        //     printf("How much was your breakfast? ");
        //     scanf("%d", &breakfast_cost);
        //     employeePaid = dinnerCost - 9;
        //     totaldinnerCost = dinnerCost();
        // }

        // int totalMealCost = totalbreakfastCost + totallunchCost + totaldinnerCost;
        // printf("Total meal cost= %d\n", totalMealCost);

        //Airfare needs
        int totalAirfareCost = airfareCost();

        //Total Expenses
        int totalExpenses = totalAirfareCost + totalTaxiCost + totalMilesDrivenCost + totalHotelCost + totalConferenceFees + totalParkingCost; //wip: needs foodCosts and parking fees
        printf("The total expenses for this trip is: %d\n", totalExpenses);
        //Total Allowable Expenses
        int companyCover = hotelCompanyCover + rentalCarCompanyCover + taxiCompanyCover +companyParkingCover; //wip: needs foodCosts and parking fees
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
