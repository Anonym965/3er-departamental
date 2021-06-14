#include <stdio.h>
// Jimenez Reyes Jahaziel
// 4IV17
int main(){
    double final;
    float calificacion;
    int suma;
    int alumnos = 0;
    int numalumnos = 0;
    char res;
    char res2;
    printf("Programa para evaluar a grupos \n\n");
    do
    {
        printf("¿cuantos alumnos quieres evaluar? \n");
        scanf("%d", &numalumnos);
        for (int i = 1; i <= numalumnos; i = i+1)
        {
            printf("Introduze la calificacion de el alumno numero_%d \n", i = i+1 );
            scanf("%f", &calificacion);
            suma = suma + calificacion;

        }
        final = suma / numalumnos /1.0;
        printf("El promedio total es:  %.2lf \n", final);

        printf("¿deseas continuar?  S/N    ");
        scanf("%c", &res);
        scanf("%c", &res2);
        if (res != 'S' && res != 's' )
        {
            continue;
        }
        else
        {
        
        }
        
        
        
    


    } while (res2 != 'N' && res2 != 'n');
    printf("Gracias");
    return 0;
    






}