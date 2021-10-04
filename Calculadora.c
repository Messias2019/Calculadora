#include <stdio.h>
int main(void){
     //Declaração das váriaveis
     float a=0, b=0, result=0;
     int ope=0;
     
     //Aqui estou usando a estrutura de repetição Do/while ou seja faça tudo o que está dentro do bloco Do/While
     //enquanto a condição for verdadeira (ope == 1). Enquanto o usuário digitar 1 para continuar, o programa vai voltar na condição "DO" e executar tudo de novo.
     do{
         //Mostrando na tela o menu da calculadora para o usuário
         printf("\n\t1 - SOMA\n\t2 - SUBTRAÇÃO\n\t3 - MULTIPLICAÇÃO\n\t4 - DIVISÃO \n");
         //Printando na tela para o usuário escolher uma opção.
         printf("\nEscolha uma opção: ");
         //armazenando a entrada do usuário na váriável &ope. 
         scanf("%d", &ope);
         //Mostrando na tela para o usuário digitar o primeiro número 
         printf("\nDigite o priemiro número: ");
         //armazenando a entrada do usuário com relação ao primeiro número digitado na váriável &a. 
         scanf("%f", &a);
         //Mostrando na tela para o usuário digitar o segundo número 
         printf("\nDigite o segundo número: ");
         //armazenando a entrada do usuário com relação ao segundo número digitado na váriável &b. 
         scanf("%f", &b);
          //O switch case É uma forma de reduzir a complexidade de vários if … else encadeados. É muito utilizado, principalmente para uso em estruturas de menu, 
          //O conteúdo de uma variável é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.     
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
                //Mostrando na tela para o usuário digitar uma opção válida caso na hora de ele digitar os número para o cálculo
                //acabar digitando uma letra por exemplo.    
                printf("\n Digite uma opção valida\n");
                break;
        }
         //Mostrando na tela o resultado da operação. 
         printf("\n\t O resultado da operação é: %0.2f", result);
         //Mostrando na tela para o usuário digitar 1 para continuar e fazer outra operação matemática. 
         printf("\n Digite 1 para continuar: ");
         //O usuário digita o número 1 e consequentemente o programa volta para o inicio do menu para escolher novamente uma opção.
         scanf("%i", &ope);
    }while(ope==1);
}
