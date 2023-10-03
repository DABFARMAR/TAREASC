#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void aleatorio(){
    int valor_aleatorio;
    valor_aleatorio = rand() % 20 +1;
    while (1){
        printf("%d\n",valor_aleatorio);
        usleep(1);
    }

}


int main(){
    pthread_t hilo1;
    pthread_t hilo2;
    pthread_t hilo3;
   
    pthread_create(&hilo1,NULL, &aleatorio,NULL);
    pthread_create(&hilo2,NULL, &aleatorio,NULL);
    pthread_create(&hilo3,NULL, &aleatorio,NULL);

    system("pause");
    return 0;
}