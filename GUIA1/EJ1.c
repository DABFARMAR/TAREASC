#include <stdio.h>
#include <stdlib.h>

//Suma cien primero impares

int main(){
    int contador = 0;

    for(int i=1 ; i<=100 ; i++){
        contador+= (2*i)-1; 
    };

    printf("\nLa suma es %d\n: ", contador);

    system("pause");
    return 0;
}