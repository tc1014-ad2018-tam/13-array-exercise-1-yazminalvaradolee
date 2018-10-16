/*
 * Programa para leer "n" tipo de variables y su secuencia,
 * a su vez tambien los pueda leer al reves dependiendo de cuantos numeros nos dio el usuario
 *
 * Autora:Yasmin Alvarado Lee
 * Fecha: 15 de octubre del 2018
 * correo: yazminalvlee@gmail.com
 */
#include <stdio.h>
#define MAX_SIZE 10000 // La longitud que pueda tener

int main()
{
    int array[MAX_SIZE]; // Variables que utilizamos en la biblioteca de su longitud
    int j;
    int n;

    printf("Introduce cuantos numeros quieres utilizar: "); // Aqui le pedimos al usuario el cuantos numeros quiere utlizar para su secuencia
    scanf("%d", &n);

    printf("Pon los numeros para crear tu secuencia %d: ", n); // Mete los numeros dependiendo de cuantos puso en la funcion de arriba
    for(j=0; j<n; j++) // Regla
    {
        scanf("%d", &array[j]);
    }

    printf("\nNumero de elementos puestos: "); // Le dice lo que metió
    for(j=0; j<n; j++) // Regla
    {
        printf("%d ", array[j]); // Lo que mostraré en pantalla
    }

    printf("\nSecuencia al reves: ");
    //OPERACIONES
    for(j=n; j>=0; j--);{
        for(j=n; j>0; j--){
        printf("%d ", array[j-1]);
    }
    }
    return 0;
}