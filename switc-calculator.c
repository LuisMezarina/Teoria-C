#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero1=0, numero2=0, continuar=-1, respuesta=-1;

    while (continuar==-1)
    {
        printf("Ingrese valor 1: \n");
        scanf("%d", &numero1);
        printf("Ingrese valor 2: \n");
        scanf("%d", &numero2);

        printf("Ingrese la opcion que desea realizar:\n");
        printf("1) Suma\n");
        printf("2) Resta\n");
        printf("3) Multiplicacion\n");
        printf("4) Division\n");
        printf("5) Salir del programa\n");
        scanf("%d", &respuesta);

        switch (respuesta)
        {
        case 1: ;break; 
        case 2: ;break; 
        case 3: ;break;
        case 4: ;break;
        case 5: ;break;
        default: ;break; 
        }
        
    }
    


    return 0; 
}