# include <stdio.h>
# include <stdlib.h>

// Declarando constantes para as linhas e colunas da matriz
#define LINHAS 4
#define COLUNAS 4 

/* esqueleto da função 
tipo_de_retorno nome_funcao(parametros)
{
    comandos...
}
*/

// Função multiplicar
int multiplicar(int pn1, int pn2) // multiplica recebe n1, n2 e retorna um int
{
    int res;
    res = pn1 * pn2;
    return(res); // Terá que ser obrigatoriamente int. 
}


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

    // ***** Estrutura de repetição do ... while() *****

    // executa o comando primeiro e somente testa se a condição é verdadeira no final
    // isto garante que o comando será executado UMA VEZ

    do 
    {
        printf("Digite um valor positivo para repetir \n");
        scanf("%d", &resp);
    }
    while (resp > 0);

    
    // declarando e inicializando o vetor v1 
    float v1[4] = {7.1, 8.4, 9.5, 5.2};

    printf("Exibindo os valores de um Vetor \n\n");
    printf("v1[0] = %.1f\n", v1[0]);
    printf("v1[1] = %.1f\n", v1[1]);
    printf("v1[2] = %.1f\n", v1[2]);
    printf("v1[3] = %.1f\n", v1[3]);
    int i; // contador para os índices do vetor

    for(int i = 0; i < 4; i++) {
        printf("v1[%d] = %.1f\n", i, v1[i]);
    }

    // declarando uma matriz
    int matriz[LINHAS][COLUNAS], i, j;

    printf("\nDigite o valor para a matriz\n\n");

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[ i ][ j ]);
        }
        
    }
    
    printf("\n\n------------- Saida de Dados -------------\n\n");

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("\nElemento[%d][%d] = %d\n", i, j, matriz[ i ][ j ]); 
        }
        
    }
    

    //Definindo o conteúdo do struct
    struct fichaAluno
    {
     int matricula;
     float nota1;
     float nota2; 
    };
    
    // Criando a variável aluno que será do tipo struct fichaAluno
    struct fichaAluno aluno;

    printf("Numero da matricula ..: ");
    scanf("%d", &aluno.matricula);

    printf("Informe a 1a. nota ..: ");
    scanf("%f", &aluno.nota1);

    printf("Informe a 2a. nota ..: ");
    scanf("%f", &aluno.nota2);

    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Matricula .........: %d\n", aluno.matricula);
    printf("Nota da prova 1 .........: %.2f\n", aluno.nota1);
    printf("Nota da prova 2 .........: %.2f\n\n", aluno.nota2);

    */

    int v1, v2, resultado;

    printf("Digite o primeiro valor:");
    scanf("%d", &v1);
    printf("Digite o segundo valor:");
    scanf("%d", &v2);

    // chama a função e recebe o retorno
    resultado = multiplicar(v1, v2);

    printf("Resultado = %d\n\n", resultado);


    system("pause");
    return 0;     
}