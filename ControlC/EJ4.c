#include <stdio.h>




int main(){
    for(int i = 1; 10 >= i ; i++){
        printf("%d -> ",i);
        for(int j = 100; 150 >= j; j+=10){
            printf("%d\t",j);
        }
        printf("\n");

    };
    return 0;
}