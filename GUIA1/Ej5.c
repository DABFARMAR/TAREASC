#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1,nota2,nota3,nota4;
    int i;
    float media;

    printf("Primera nota: ");
    scanf("%f",&nota1);
    printf("Segunda nota: ");
    scanf("%f",&nota2);
    printf("Tercera nota: ");
    scanf("%f",&nota3);
    printf("Cuarta nota: ");
    scanf("%f",&nota4);



    media = (nota1+nota2+nota3+nota4)/4;
    printf("\nEl promedio es: %.3f\n",media);

    system("pause");
    return 0;
}