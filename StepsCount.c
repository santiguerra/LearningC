#include <stdio.h>


int main()  {

    int dailySteps;
    int weeklySteps;
    int day;
    int goal;

    printf("Welcome to step tracker\n");
    printf("Please put your steps goal\n");
    scanf("%d", &goal);

    printf("Alright your goal for this week is %d. We will let you know when you get it.\n", goal);

    for (day = 1; day <= 7; day++)
    {
        printf("Today is the day %d put your steps of today\n", day);
        scanf("%d", &dailySteps);
        weeklySteps = (dailySteps + weeklySteps);
        printf("Good job you make %d this week\n", weeklySteps);

        if (weeklySteps >= goal)
        {
            printf("WOW you complete your step goal. You made %d steps\n", weeklySteps);
            printf("\n**********************************************\n\n");

        } else  {
            printf("You are missing %d steps to complete your goal\n", (goal - weeklySteps));
            printf("\n**********************************************\n\n");

        }
        
        
    }

   
    


   
   
    
    return 0;
}
