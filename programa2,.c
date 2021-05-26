#include <stdio.h>
/* jimenez reyes jahaziel
equipo zener*/
int main(){
    int hora, minutos, segundos;
    printf("ingresa las horas");
    scanf("%d", hora);
    printf("ingresa los minustos");
    scanf("%d", minutos);
    printf("ingresa los segundos");
    scanf("%d", segundos);

    if ( (hora>=0 && hora<=23) &&      /*las horas van de 0 a 23 entonces decimos que en la varibale hora el numero tiene que ser mayor o igual a 0 y tiene que ser menor o igual a 23, aqui los simbolos de < y > se les llaman operadore RELACIONALES, 
    el simbolo "&"" se usa para decir "y" Y ES UN OPERADOR LOGICO O BOOLEANO*/
    (minutos>=0 && minutos<=59) &&  /*los minutos van de 0 a 59 al iual que los segundos y los parentesis de main se le llaman paametros*/
    (segundos>=0 && segundos<=59)
    ) 
    {
        printf("la hora es correcta");
    }
    else
    {
        printf("La hora es incorrecta");
    }
    
    


}