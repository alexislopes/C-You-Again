#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int setup;

    printf("1 - Extremamente Basico.\n2 - Area do Circulo.\n3 - Soma Simples.\n4 - Produto Simples.\n5 - Media 1.\n");
    printf("6 - Media 2.\n7 - Diferenca.\n8 - Salario.\n9 - Salario com Bonus.\n10 - Calculo Simples.\n\n");
    puts("Escolha um Exercicio: ");
    scanf("%d", &setup);

    if(setup == 1){ // 1001 - Extremamente Básico.
        puts("\t 1001 - Extremamente Basico.");
        int A, B, X;
        scanf("%d", &A);
        scanf("%d", &B);
        X=A+B;
        printf("X = %d\n", X);}

    if(setup == 2){ //1002 - Área do Círculo.
        puts("\t 1002 - Area do Circulo.");
        double area, R;
        scanf("%lf", &R);
        area = (R * R) *3.14159;
        printf("A=%.4lf\n", area);}

    if(setup == 3){ // 1003 - Soma Simples.
        puts("\t 1003 - Soma Simples.");
        int A,B,SOMA;
        scanf("%d %d", &A, &B);
        SOMA = A + B;
        printf("SOMA = %d\n", SOMA);}

     if(setup == 4){ //1004 - Produto Simples.
        puts("\t 1004 - Produto Simples.");
        int A,B, PROD;
        scanf("%d %d", &A, &B);
        PROD = A * B;
        printf("PROD = %d\n", PROD);}

    if(setup == 5){ // 1005 - Média 1.
        puts("\t 1005 - Media 1.");
        float A, B, MEDIA;
        scanf("%f %f", &A, &B);
        MEDIA = (A*3.5 + B*7.5)/(3.5+7.5);
        printf("MEDIA = %.5f\n", MEDIA);}

    if(setup == 6){ // 1006 - Média 2.
        puts("\t 1006 - Media 2.");
        float A, B, C, MEDIA;
        scanf("%f %f %f", &A, &B, &C);
        MEDIA = (A*2 + B*3 + C*5)/(2+3+5);
        printf("MEDIA = %.1f\n", MEDIA);}

    if(setup == 7){ // 1007 - Diferença.
        puts("\t 1007 - Diferenca.");
        int A, B, C, D, DIFERENCA;
        scanf("%d %d %d %d", &A, &B, &C, &D);
        DIFERENCA = (A * B) - (C * D);
        printf("DIFERENCA = %d\n", DIFERENCA);}

    if(setup == 8){ // 1008 - Salário
        puts("\t 1008 - Salario");
        int numero, hora;
        float salario, porhora;
        scanf("%d %d %f", &numero, &hora, &porhora);
        salario = hora * porhora;
        printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);}

    if(setup == 9){ // 1009 - Salário com Bonus.
        puts("\t 1009 - Salario com Bonus.");
        char nome;
        float salario, montante, total;
        scanf("%s %f %f", &nome, &salario, &montante);
        total = ((montante*15)/100) + salario;
        printf("TOTAL = R$ %.2f\n", total);}

    if(setup == 10){ // 1010 - Cálculo Simples.
        puts("\t 1010 - Calculo Simples.");
        int codigo1, codigo2, quantidade1, quantidade2;
        float preco1, preco2, total;
        scanf("%d %d %f", &codigo1, &quantidade1, &preco1);
        scanf("%d %d %f", &codigo2, &quantidade2, &preco2);
        total = (quantidade1 * preco1) + (quantidade2 * preco2);
        printf("VALOR A PAGAR: R$ %.2f\n", total);}

    return 0;
}
