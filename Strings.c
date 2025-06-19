#include <stdio.h>

int main() {
    
    // VARIABLE STATEMENT
    char hola[] = "hello";
    char nombre[50];
    char user[50];


    // MAIN EXECUTION
    printf("what is your name\n");
    scanf("%s", nombre);
    

    printf("\nwhat is your nickname\n");
    scanf("%s", user);

 
    printf("%s your name is %s and my nickname is %s", hola, nombre, user);

    return 0;
}
