#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char cadena[50];



    printf("Cadena: ");
    scanf("%s",&cadena);

    printf("Llegar %d\n",strlen(cadena)/2 - 0.5);

    /*if(strlen(cadena)%2 != 0){
        for(int i=0; i>;++){



        }


    };*/



    system("pause");
    return 0;
}