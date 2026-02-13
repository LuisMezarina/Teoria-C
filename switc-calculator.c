#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero1=0, numero2=0, continuar=-1, respuesta=-1, suma=0, resta=0, multiplicacion=0, division=0;

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
        case 1: suma=numero1+numero2; printf("suma:%d\n", suma) ;break; 
        case 2: resta=numero1-numero2; printf("Resta:%d\n", resta);break; 
        case 3: multiplicacion=numero1*numero2; printf("Multiplicacion:%d\n", multiplicacion) ;break;
        case 4: division=numero1/numero2; printf("Division:%d\n", division) ;break;
        case 5: continuar=0 ;break;
        default: printf("Opcion no valida\n") ;break; 
        }
        
    }
    


    return 0; 
}