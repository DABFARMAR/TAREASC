#include <stdio.h>
#include <math.h>

int main(){
    float ladoI;
    float ladoII;

    printf("LADO I: ");
    scanf("%f",&ladoI);
    printf("LADO II: ");
    scanf("%f",&ladoII);    // h^2 = c1^2 + c2^2 // a + b > c o 

    


    float hipotenusa = sqrt(ladoI*ladoI + ladoII*ladoII);

    //Desigualdad triangular
    if(ladoI > ladoII + hipotenusa || ladoII > ladoI + hipotenusa || hipotenusa > ladoI + ladoII){
        printf("No es un triangulo.");
        return 0;

    }

    float area = (ladoI * ladoII)/2;
    float perimetro = hipotenusa + ladoI + ladoII;


    printf("Hipotenusa: %.2f\tArea: %.2f\tPerimetro: %.2f",hipotenusa,area,perimetro);
    


    return 0;
}