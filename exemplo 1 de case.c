#include <stdio.h>

int main(){
    char letra;
    printf("Digite uma letra:");
    scanf("%s",&letra);
    switch (letra){
        case 'a':
        printf("Domingo");
        break;
        case'b':
        
        printf("Segunda");
        break;
        default:
        printf("opção inválida");
    }
}