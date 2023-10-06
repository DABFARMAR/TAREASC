#include <stdio.h>




int factorial(int fact){
    if (fact == 1){
        return fact;
    }
    return fact * factorial(fact-1); 
}


int main(){
    int n = 3;
    printf("%d",factorial(n));
    return 0;
}