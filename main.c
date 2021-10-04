#include <stdio.h>
int main(void){
     float a=0, b=0, result=0;
     int ope=0;
     do{
         printf("\n\t1 - SOMA\n\t2 - SUBTRAÇÃO\n\t3 - MULTIPLICAÇÃO\n\t4 - DIVISÃO \n");
         printf("\nEscolha uma opção: ");
         scanf("%d", &ope);
         printf("\nDigite o priemiro número: ");
         scanf("%f", &a);
         printf("\nDigite o segundo número: ");
         scanf("%f", &b);
         switch(ope){
             case 1:
                result = a+b;
                break;
             case 2:
                result = a-b;
                break;
             case 3:
                result = a*b;
                break;
             case 4:
                result = a/b;
                break;
             default:
                printf("\n Digite uma opção valida\n");
                break;
        }
         printf("\n\t O resultado da operação é: %0.2f", result);
         printf("\n Digite 1 para continuar: ");
         scanf("%i", &ope);
    }while(ope==1);
}