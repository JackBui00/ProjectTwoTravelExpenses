#include <stdio.h>

double ParkingFee(int daysOfTrip, double parking, double totalExpenses,
        double reimbursement, double amntSaved, double totalAllowableExpense){
    char input;
    printf("Was there any parking fees? ")
    scanf("%c", &input);

    
    
    if(input == 'y' || input == 'Y'){
        double allowableFee = 6.00;
        double parkingFee;
        
        for (int i = 0; i < daysOfTrip; i++){
            totalAllowableExpense += allowableFee;

            printf("Enter parking fees for the day : ")
            scanf("%d", &parkingFee);

            
            totalExpenses += parkingFee;

            if (parkingFee > allowableFee){
                reimbursement += (parkingFee - allowableFee);
            }
            else if(parkingFee <= allowableFee){
                amntSaved += parkingFee;
            }
        }
    }
    return 0;
}
