#include <stdio.h>
#include <stdlib.h>


int main(){

    struct product{
        char code[10];
        char description[50];
        float price;
    }product1 = {"98234523","Collar",22.35},product2={"12345678","Comida",10.26};
    

    if (product1.price > product2.price){
        printf("El %s es mas caro\n",product1.description);

    } else{
        printf("La %s es mas cara\n",product2.description);

    };

    system("pause");
    return 0;
}