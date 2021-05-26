#include <stdio.h>
int main(){
    char letra;
    printf(" Ingresa la letra y verifica si es vocal:  ");
    scanf("%c", &letra);
    if ( (letra == 'a' || letra == 'A')  ||         /* el simbolo || se utiliza para decir "or" y darle al 
    prgrama varias opciones las cuales el usuario pueda insertar y el programa pueda identificar 
    y este un operador logico o booleano*/
    (letra == 'e'  || letra == 'E')  ||
    (letra == 'i'  || letra == 'I') ||
    (letra == 'o'  || letra == 'O') ||    
    (letra == 'u' || letra =='U')  
    )
    {
        printf("la letra %c es una vocal", letra);
    }
    else
    {
        printf("%c no es una vocal", letra);
    }
    
    







    return 0;



}