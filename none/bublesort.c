#include <stdio.h>



void MostrarArreglo(int* list,int tamanho){
   for(int j = 0; j<tamanho;j++){
    printf("%d\t",list[j]);
   }
   printf("\n");
   
}


int main(){
    int list[7] = {55,78,99,10,44,67,32};
    int tmp;

    int cantidad = sizeof(list) / sizeof(list[0]);

    MostrarArreglo(list,cantidad);

    for(int j = cantidad - 1 ; j>= 0; j--){
        for(int i = 0; j >= i ;i++){
            if(list[i]>list[i+1]){
                tmp = list[i+1];
                list[i+1] = list[i];
                list[i] = tmp;
            }
        }}

    MostrarArreglo(list,cantidad);
    return 0;

}

