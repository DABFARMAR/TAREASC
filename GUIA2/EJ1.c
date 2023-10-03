#include <stdio.h>
#include <stdlib.h>

void MostrarArreglo(int* list){
    for(int i = 0;i<5;i++){
        printf("%d\t",list[i]);

    };
}


int Minimo(int* list, int tamanho){
    int auxx;
    int aux = list[tamanho];
    for(int i=tamanho+1; i<5;i++){
        if (aux > list[i]){
            aux = list[i];
            auxx = i;
        }
    }
    list[auxx] = tamanho;
    list[tamanho] = aux;
}

int main(){
    int list[5];
    int aux;
    
    //Relleno arreglo
    for(int i=0 ; i<5 ;i++){
        printf("Ingresar elemento en la posicion %d\n",i);   // 6 3 2 7 9 - 3 2 7 9 - 2 7 9 
        scanf("%d", &list[i]);
    };


   int j = 0;
   while(j < 5){
        list[j] = Minimo(list,j);

    j++;
   }
                                            
 

    system("pause");
    return 0;
}
