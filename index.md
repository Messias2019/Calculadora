## Bem-vindo ao meu repositório

You can use the [editor on GitHub](https://github.com/Messias2019/Calculadora/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

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

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/Messias2019/Calculadora/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
