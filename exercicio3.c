#include <stdio.h>

int main()
{
    int num;
    printf("Digite o valor:");
    scanf("%d",&num);
    if(num%3==0){
        printf("É multiplo de 3");
    }else{
        printf("Não é multiplo de 3");
    }
    }
