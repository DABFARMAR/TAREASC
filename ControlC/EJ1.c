#include <stdio.h>
#include <string.h>

int main(){
    char frase[] = "";
    char letra;

    printf("Letra: ");
    scanf("%c",&letra);
    printf("Frase: ");
    scanf("%s",&frase);
    
    int i = 0;
    int cont = 0;
    while(i < strlen(frase)){
        if(frase[i] == letra){
            cont++;
        }

        i++;
    }
    printf("%d",cont);
    return 0;
}