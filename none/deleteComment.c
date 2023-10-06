#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX_SIZE 1000

int main(){
char code[100];
char name[20];
FILE *archivo;
int i;
int cont = 0;

if ((archivo = fopen("ahora.txt","r")) == NULL)
    return 1;

/*AHORA SI HOLA MUNDO */
/*Lo que hace fgets es recibir una cadena donde el maximo de caracterees es sizeof(code), y el archivo*/
while (fgets(code, sizeof(code), archivo) != NULL) {
        for (i = 0; i <= strlen(code);i++){
            if (code[i] == 47 && code[i+1] == 42)
                cont = 1;
            
            if (cont == 0){
                if (code[i] != '/')
                    printf("%c",code[i]);

            } else {
                if (code[i] == 42 && code[i+1] == 47)
                    cont = 0;

            }
    
        }        
    }

fclose(archivo);
system("pause");
return 0;
}







