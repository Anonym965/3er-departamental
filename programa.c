/*verificar si es par o impar*/
#include <stdio.h>
int main(){
    int numero;
    printf("pon un numero");
    scanf("%d", &numero);
    if (numero%2 == 0) {  /*el procentaje (modulo) se usa*/ 
        printf("es numero es par");
        
    }
    else
    {
        printf("su numeor es impar");
    }
    
    
return 0;

}