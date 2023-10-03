#include <stdio.h>
#include <stdlib.h>

//Muestra vector
void mostrar_vector(int* list){
    for(int i = 0; i<sizeof(list)+1;i++){
        printf("%d\t",list[i]);
    }
    printf("\n");
};

int main(){
    int list[5] = {45,1,88,99,67};
    mostrar_vector(list);
             
    int tmp;
    for(int i = 0; i<5 ;i++){
        for(int j = i+1; j<5 ;j++){
            if(list[i] >  list[j]){
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;

            }


        }

    }

    mostrar_vector(list);
    
    system("pause");
    return 0;
}
