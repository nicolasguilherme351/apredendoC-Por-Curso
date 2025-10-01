# include <stdio.h>
# include <stdlib.h>

int main(void) 
{
    int n = 10; 
    float n2 = 6.79;
    char letra = 'a';
    char frase[10] = "Bom dia! ";
    double n3 = 1.23456;
    
    printf("Hello World!\n");

    printf("Exibindo o numero inteiro %d\n", n);
    printf("Exibindo o numero real %f\n", n2);
    printf("Exibindo o caracter %c\n", letra);
    printf("%s\n", frase);
    printf("Exibindo variavel do tipo double %f\n", n3);
    printf("Valores: %d %f %c %s %f\n", n, n2, letra, frase, n3);

    system("pause");
    return 0;     
}