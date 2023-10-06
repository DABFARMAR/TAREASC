#include <stdio.h>
#include <string.h>


int main(){
    char word[] = "oso";
    int tmp = strlen(word) - 1;

    for(int i=0;i< strlen(word) / 2 ; i++){
        
        if(word[i] == word[tmp]){
            tmp--;
        } else {
            printf("No es palindromo");
            return 0;
        }

    };

    printf("Es palindromo");
    return 0;

}
