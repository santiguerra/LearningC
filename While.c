#include <stdio.h>

int main() {

    float budget;
    float valorT = 0;
    float valorO = 0;

    printf("Manage your money\n Put your budget\n");
    scanf("%f", &budget);

    while (budget > valorT)
    {
        printf("Put the price of what your bought\n");
        scanf("%f", &valorO);

        if ( budget < (valorO + valorT))
        {
            printf("\nSorry you can't afford that. You have $%.2f\n", (budget - valorT));
            valorO = 0;
        } else {
            valorT = (valorO + valorT); 
            printf("\nOk your purchase is register. You have $%.2f\n", (budget - valorT));
        }

        if ((( valorT / budget) * 100) >= 100)
        {
            printf("Gasto en grafica\n");
            printf("\t ********************\n");
            printf("\t* ****************** *\n");
            printf("\t* ****************** *\n");
            printf("\t ********************\n");
        } else if (((valorT / budget) * 100) >= 80)
        {
            printf("\t ********************\n");
            printf("\t* ****************   *\n");
            printf("\t* ****************   *\n");
            printf("\t ********************\n");

        } else if ((( valorT / budget) * 100) >= 60)
        {
            printf("\t ********************\n");
            printf("\t* ************       *\n");
            printf("\t* ************       *\n");
            printf("\t ********************\n");

        } else if (((valorT / budget) * 100) >= 40)
        {
            printf("\t ********************\n");
            printf("\t* *********          *\n");
            printf("\t* *********          *\n");
            printf("\t ********************\n");

        } else if ((( valorT / budget) * 100) >= 20)
        {
            printf("\t ********************\n");
            printf("\t* ***                *\n");
            printf("\t* ***                *\n");
            printf("\t ********************\n");

        }   else 
        {
            printf("\t ********************\n");
            printf("\t* *                   *\n");
            printf("\t* *                   *\n");
            printf("\t ********************\n");

        }
        
        
    }
   
    printf("You finish your budget");
    return 0;
}
