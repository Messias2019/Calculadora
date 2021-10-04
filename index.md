## Bem-vindo ao meu Repositório

Esse espáço é para o compartilhamento de código e projetos que precisam ser compatilhados com a FIAP via WEB.

### Atividade FIAP: CAP 3 - C, A LINGUAGEM PRIMORDIAL - O FUTURO SE ESCREVE COM C

Seu gestor na Almourol lhe deu a missão de estudar os fundamentos de IoT, e como não poderia ser diferente, você começou com a Linguagem C.

Apesar do que muitos acham, a Linguagem C ainda é imprescindível, principalmente para aqueles que desejam trabalhar com hardware. E você, aluno de Defesa Cibernética que entende a importância de realizar testes de segurança em hardware (o famoso Hardware Hacking), sabe que seu sucesso nesse tema está diretamente ligado aos sólidos fundamentos em C que você precisa construir.

```markdown
Código da calculadora

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
```

### Observação

Essa página é de uso acadêmico para compatilhar código e projetos com relação ao curso da FIAP.
