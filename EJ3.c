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

    int s = (a+b+c)/2;

    if(a==b && a==c){
        printf("Equilatero");

    }; 
    if(a==b && a!=c){
        printf("Isoceles");

    } else {
        printf("Escaleno");
    };


    printf("\nEl area es: %f",sqrt(s*(s-a)*(s-b)*(s-c)));
    system("pause");
    return 0;
}