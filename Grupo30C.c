/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int anio, suma, resto;
    float i ;
    suma = 0;
    printf("Ingrese un numero mayor que 1900 y menor que 2055: ");
    do
    {
        scanf("%d", &anio);
        if (anio <= 1900 || anio >= 2055)
        {
            printf("El anio ingresado esta fuera del rango establecido, ingrese un anio valido: ");
              
        }
    } while (anio <= 1900 || anio >= 2055);
    
    resto = anio;
    
    for (i=3; i>=0; i--)    
    {
        anio = resto / pow(10.00,i);
       printf("%d", anio);
		resto = resto - anio * pow(10.0,i);

		suma = suma + anio;
        printf("- %d - \n", suma);
    }
        
    
    if (suma > 9)
    {
        resto = suma;
        printf("%d \n", resto);
        resto = resto / 10;
        printf("%d", resto);
		suma = suma % 10;
		printf("+ %d \n", suma);
		suma= suma + resto;
	   printf("%d", suma);
    }
   
    
    return 0;
}


