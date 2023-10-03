#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototipo de funcion
char* reverse(char*);

//Funcion real
char* reverse(char* nombre){
    int large = strlen(nombre);
    int i;
    char* aux = malloc(large + 1);
    
    for(i=large-1;i>=0;i--){
        aux[large-1-i] = nombre[i];
    };
    aux[large] = '\0';
    return aux;
};


int main(){
    char nombre[100];
    printf("Ingresar palabra: ");
    scanf("%s",nombre);

    printf("\nLa cadena es %s\n",reverse(nombre));

    system("pause");
    return 0;
}