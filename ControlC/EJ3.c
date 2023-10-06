#include <stdio.h>



int main(){
    int dato;
    int contPa = 0;
    int contImp = 0;

    while(1){
        printf("Ingrese numero: ");
        scanf("%d",&dato);

        if(dato < 0){
            printf("Numero negativo");
            printf("Impares: %d\t Pares: %d",contImp,contPa);
            break;
        }

        if(dato != 0){ 
            if(dato % 2 == 0){
        
                contPa++;
            
            } else if(dato % 2 != 0){;
            
                contImp++;
            
            } 
        }


    }
    return 0;
}