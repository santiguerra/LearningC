#include <stdio.h>
#include <wchar.h>
#include <locale.h>




int main() {

    // Para poner caracteres especiales (manitos)
    setlocale(LC_ALL, "");
    
    // VARIABLE STATEMENT
    char nombre [10];
    char apellido [10];
    char tipoDeOfrenda[20];
    int valor;
    int documento;

    // MAIN EXECUTION
    printf("Dios te bendiga hermano, porfavor denos su nombre\n");
    scanf (" %9s", nombre);

    printf("Gracias %s ahora tu primer apellido\n", nombre);
    scanf(" %9s", apellido);

    printf("Cual es su numero de documento hermano %s?\n", nombre);
    scanf("%d", &documento);

    printf("Que tipo de ofrenda desea realizar hermano %s?\n", nombre);
    scanf(" %19s", tipoDeOfrenda);

    printf("De que valor va a ser su %s?\n", tipoDeOfrenda);
    scanf("%d", &valor);
    

    //EXCUTION
    printf("****************************************\n");
    printf("*                                      *\n");
    printf("*\t   Comprobante de pago         *\n");
    printf("*                                      *\n");
    printf("****************************************\n");
    printf("* Nombre Completo  : %s %s   *\n", nombre, apellido);
    printf("* Documento        : %d        *\n", documento);
    printf("* Tipo de ofrenda  : %s            *\n", tipoDeOfrenda);
    printf("* Valor            : %d             *\n", valor);
            if (valor < 10000)   {
    printf("* Bendicion        : 🙏🏻              *\n");
          } else if (valor < 20000) { 
    printf ("* Bendicion       :🙏🏻🙏🏻           *\n");
         } else if (valor < 50000) {
    printf ("* Bendicion       :🙏🏻🙏🏻🙏🏻        *\n");
         } else if (valor < 100000)  {
    printf ("* Bendicion       :🙏🏻🙏🏻🙏🏻🙏🏻    *\n");
         } else if (valor > 100000)   {
    printf("* Bendicion        :🙏🏻🙏🏻🙏🏻🙏🏻🙏🏻        *\n");
         }
                     
    printf("****************************************\n");





    return 0;
}
