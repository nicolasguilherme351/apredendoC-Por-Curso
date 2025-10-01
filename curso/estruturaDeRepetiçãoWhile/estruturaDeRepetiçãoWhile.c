# include <stdio.h>
# include <stdlib.h>

int main(void) 
{
    int n = 10; 
    float n2 = 6.79;
    char letra = 'a';
    char frase[10] = "Bom dia! ";
    double n3 = 1.23456;
    int valor1, valor2, soma, sub, mult, div, numero, resto, dia,cont, resp; 
    float nota1, nota2, media, freq;

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

    printf("Digite um numero de 1 a 7:  ");
    scanf("%d",&dia);

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;   
    case 3:
        printf("Terca\n");
        break;
    case 4:
        printf("Quarta\n");
        break;       
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;    
    default:
        printf("Valor invalido!\n");
        break;
    }

    // Operador ternário: pode ser mais curto que usar if ... else em algumas decisões 
    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    // Condição a testar ? verdadeiro : falso

    numero > 0 ? printf("Postivo\n") : printf("Negativo\n");

    printf("Digite a frequencia do aluno: ");
    scanf("%f", &freq);
 
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    printf("Media = %.1f\n", media);

    // if aninhado
    if (media >= 5 && freq >= 75) // operador && 
    {
        printf("Aluno aprovado\n");
    }
    else 
        if (media < 2 || freq <= 75) // operador ||
        {
            printf("Aluno reprovado\n");
        } 
        else
            { 
                printf("Aluno em recuperacao\n");
            }
        
    // estrutura de repetição for    
    for (cont = 1; cont <= 10; cont++) // ou for (cont = 1; cont <= 100; cont = cont + 1) ou for (cont = 1; cont <= 100; cont+=1)
    {
        printf("%d - Boa Tarde\n", cont);
    }

    // ---- Estrutura de repetição while ----

    cont = 0; // inicializando a váriavel de controle

    // while (condição) repete enquanto a condição for verdadeira
    while (cont <= 5)
    {
        printf("%d - Linguagem C \n", cont);
        // cont++; // incremento da váriavel de controle
    }

    */

    // ***** Estrutura de repetição do ... while() *****

    // executa o comando primeiro e somente testa se a condição é verdadeira no final
    // isto garante que o comando será executado UMA VEZ

    do 
    {
        printf("Digite um valor positivo para repetir \n");
        scanf("%d", &resp);
    }
    while (resp > 0);


    system("pause");
    return 0;     
}