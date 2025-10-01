# include <stdio.h>
# include <stdlib.h>

int main(void) 
{
    int n = 10; 
    float n2 = 6.79;
    char letra = 'a';
    char frase[10] = "Bom dia! ";
    double n3 = 1.23456;

    int valor1, valor2, soma, sub, mult, div, numero, resto; 
/*
    printf("Hello World!\n");

    printf("Exibindo o numero inteiro %d\n", n);
    printf("Exibindo o numero real %f\n", n2);
    printf("Exibindo o caracter %c\n", letra);
    printf("%s\n", frase);
    printf("Exibindo variavel do tipo double %f\n", n3);
    printf("Valores: %d %f %c %s %f\n", n, n2, letra, frase, n3);

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor1);

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2; 
    sub = valor1 - valor2; 
    mult =  valor1 * valor2;
    div = valor1 / valor2;

    printf("Valor da soma %d + %d = %d\n", valor1, valor2, soma);
    printf("Valor da subtracao %d - %d = %d\n", valor1, valor2, sub);
    printf("Valor da multiplicacao %d * %d = %d\n", valor1, valor2, mult);
    printf("Valor da divisao %d / %d = %d\n", valor1, valor2, div);
*/

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resto = numero % 2;

    printf("Resto da divisao %d\n", resto);

    if(resto == 0)
    {
        printf("Numero par!\n");
    } else {
        printf("Numero impar\n ");
    }

    system("pause");
    return 0;     
}