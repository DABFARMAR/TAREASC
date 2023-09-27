#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1,nota2,nota3,nota4;
    int i;

    printf("Primera nota");
    scanf("%.3f",&nota1);

    printf("Segunda nota");
    scanf("%.3f",&nota2);

    printf("Tercera nota");
    scanf("%.3f",&nota3);

    printf("Cuarta nota");
    scanf("%.3f",&nota4);

    printf("\nEl promedio es: %.3f\n",((0.25*nota1)+(0.25*nota2)+(0.25*nota3)+(0.25*nota4)));

    system("pause");
    return 0;
}