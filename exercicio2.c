#include <stdio.h>

int main()
{

    int numero1, numero2,soma,resultado;
    printf("Digite seu numero");
    scanf("%d",&numero1);
    printf("Digite seu numero");
    scanf("%d",&numero2);
    
soma=numero1+numero2;
if(soma>20){
    resultado=soma+8;
    printf("A soma dos tre%d\n", soma);
}else{
    resultado=soma-5;
    printf("A soma dos tres %d\n", soma)
}
}