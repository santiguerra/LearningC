#include <stdio.h>
int main()
{
    // Variable statement 
    int hour;


    //Main execution 
    printf("Hi, I'll suggest some activities for you depending on the time. What time is it (in 24-hour format)?\n");
    scanf("%d", &hour);

    switch (hour)
    {
    case 6:
    case 7:
    case 8:
    case 9:
        printf("It's time to breakfast🥞");
        break;
    case 10:
    case 11:
        printf("Time to work 🧑‍💻");
        break;
    case 12:
    case 13:
    case 14:
        printf("time to lunch🥗");
        break;
    case 15:
    case 16:
    case 17:
    case 18:
        printf("Time to work again 🧑‍💻");
        break;
    case 19:
    case 20:
    case 21:
    case 22:
        printf("Relax or Have a dinner 🍽️");
        break;
    default:
        printf ("Time to sleep 💤");
        break;
    }
  





    return 0;
}
