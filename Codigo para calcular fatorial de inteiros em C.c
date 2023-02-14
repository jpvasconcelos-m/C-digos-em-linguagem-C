/*Crie um programa que calcule o fatorial de um número. (Utilize uma função recursiva)*/

#include <stdio.h>
#include <stdlib.h>
/*Protótipo da função*/
int fat(int num);

int main(){
    int num,resultado;

printf("Digite o número: ");
    scanf("%d",&num);

resultado=fat(num);

printf("\nO fatorial de %d é: %d",num,resultado);
}

int fat(int num){
    if(num>0)
return num*fat(num-1);

    if(num==0)
return 1;    
}

/*Ex: 5x4x3x2x1 --> (i-1)*(i-1)*(i-1)... */
/* Se i=0 retorna 1. */
