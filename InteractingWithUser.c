#include <stdio.h>

int main () {
    int shells;
    

    printf("How many shells you want?\n");
    scanf ("%d", &shells);
 

    if (shells <= 50)
    {
        printf("Why so few\n");
    }
    

    return 0;

}