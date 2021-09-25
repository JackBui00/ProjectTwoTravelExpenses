#ifndef __MEALFUNCTION_H_
#define __MEALFUNCTION_C_

double mealExpense() {
	char choice;
	char choice1;
	double mealCost;
	int time;
	int time2;
	double totalCost;
	double total_remaining;
	double total_saving;
	double total_allowable_cost;
	const double allowable_breakfast_cost = 9.00,
                      allowable_lunch_cost= 12.00,
                      allowable_dinner_cost = 16.00;
	printf("\nDid you eat meal on the first day? (Y or N): ");
	scanf("%d", &choice);
	printf("\nWhat time did you eat your meal? ");
	scanf("%d", &time);
	if (choice =='Y' || choice == 'y')
	{
		printf("How much was your meal? ");
		mealCost = inputValidate(mealCost, 0);
		totalCost += mealCost;

		if(time < 7)
        		{
			if (mealCost > allowable_breakfast_cost) // 15 > 9 = 6.00
                			total_remaining += (mealCost - allowable_breakfast_cost);

			else if (mealCost <= allowable_breakfast_cost) // 5 < 9 
                			total_saving += mealCost; //saving 
            
		}
		
		else if (time >= 7 && time < 12)
        		{
            		total_allowable_cost = allowable_lunch_cost;

            		if (mealCost > allowable_lunch_cost) // 14 > 12 = $2.00
				total_remaining = mealCost - allowable_lunch_cost;

            		else if (mealCost <= allowable_lunch_cost) // 10 < 12 = 2
                			total_saving = allowable_lunch_cost - mealCost;

        		}
		else if (time >= 12 && time < 18)
        		{
            		total_allowable_cost += allowable_dinner_cost;

            		if (meal_fee > allowable_dinner_cost)
                			total_remaining = mealCost - allowable_dinner_cost;

            		else if (mealCost <= allowable_dinner_cost)
                			total_saving = allowable_dinner_cost - mealCost;
        		}

        		else if (departure_time >= 18)
            		total_remaining = mealCost;
	}
	printf("\nDid you eat a meal on the last day? (Y or N) ";
    	scanf("%d", choice1);
	printf("\nWhat time did you eat your meal? ");
	scanf("%d", time2); 
	
	if (choice1 == 'Y' || choice1 == 'y')
    	{
		printf("\nHow much was your meal? ");
        		scanf("%d", mealCost);

        		totalCost = mealCost;

        		if(time2 <= 8)
            		total_remaining = mealCost;

        		else if(time2 > 8 && time2 <= 13)
        		{
            		total_allowable_cost = allowable_breakfast_cost;

            		if (mealCost> allowable_breakfast_cost)
                			total_remaining = (mealCost - allowable_breakfast_cost);

            		else if (mealCost <= allowable_breakfast_cost)
                			total_saving = mealCost;
        		}

       		else if (time2 > 13 && time2 <= 19)
        		{
            		total_allowable_cost = allowable_lunch_cost;

            		if (mealCost > allowable_lunch_cost) // 13.00 > 12.00 == 1.00
                			total_remaining = mealCost - allowable_lunch_cost;

            		else if (mealCost <= allowable_lunch_cost)
                			total_saving = mealCost; 
        		}

        		else if (arrival_time > 19)
        		{
            		total_allowable_cost += allowable_dinner_cost;
            		if (mealCost > allowable_dinner_cost)
                			total_remaining = (mealCost - allowable_dinner_cost);

            		else if (mealCost<= allowable_dinner_cost)
                			total_saving = mealCost;
        		}
   	 }

}
