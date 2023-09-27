#include <stdio.h>
#include <stdlib.h>



int main(){
    int i;
    int contador = 0;

    for(i=1;i<=100;i++){
        contador+= (2*i)-1; 
    };

    printf("\nLa suma es %d\n: ", contador);

    system("pause");
    return 0;
}