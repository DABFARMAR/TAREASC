#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int a,b,c;

    printf("Primer lado:");
    scanf("%d",&a);
    printf("\nSegundo lado: ");
    scanf("%d",&b);
    printf("\nTercer lado: ");
    scanf("%d",&c);



    
    //Ejercicio 3
    //Desigualdad triangular
    if(a < b + c && b < a + c && c < a + b){
        printf("No es un triangulo.");
        return 0;

    }
    
    
    if(a==b && a==c){
        printf("Equilatero");

    }; 
    if(a==b && a!=c){
        printf("Isoceles");

    } else {
        printf("Escaleno");
    };


    //Ejercicio 4
    int s = (a+b+c)/2;
    printf("\nEl area es: %f\n",sqrt(s*(s-a)*(s-b)*(s-c)));

    system("pause");
    return 0;
}