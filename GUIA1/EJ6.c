#include <stdio.h>
#include <stdlib.h>


int main(){
    float nota1,nota2,nota3;
    float media;
    printf("Nota 1: ");
    scanf("%f",&nota1);
    printf("Nota 1: ");
    scanf("%f",&nota2);
    printf("Nota 1: ");
    scanf("%f",&nota3);

    media = (nota1*0.4)+(nota2*0.3)+(nota3*0.3);

    if(media < 3.95){
        printf("Reprobado");
    } else if( media >= 4.94){
        printf("Aprobado");

    } else {
        printf("Examen");
    }
    

    system("pause");
    return 0;
}