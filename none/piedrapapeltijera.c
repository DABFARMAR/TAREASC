#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    while(1){
        time_t tiempo = time(NULL);
        srand(tiempo);
        int machine = rand() % 3 + 1;
        int option;
        printf("1.Papel\n2.Piedra\n3.Tijera\n");
        scanf("%d",&option);
        
        if(option != machine)
            if (option == 1 && machine == 2 || option == 3 && machine == 1 || option == 2 && machine == 3){
                printf("\n%d\n",machine);
                printf("WIIIIIIIIIIIIIIIIIIIIIIIN!!!");
                break;  
            } else {
                printf("\n%d\n",machine);
                printf("LOOOOOOOOOOOOOOOOOOOOOOOOOOOOSE!!!");
                break;

            }
        printf("AGAIN!!!\n");
    }
    return 0;
}