#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    puts("21 - Notas e Moedas\n35 - Teste de Selecao 1\n36 - Formula de Bhaskara\n37 - Intervalo\n38 - Lanche");
    puts("40 - Media 3\n41 - Coordenadas de um Ponto\n42 - Sort Simples\n43 - Triangulo\n44 - Multiplos\n");
    int setup;
    printf("Escolha um Exercicio: "); scanf("%d", &setup);

    if(setup == 21){
        puts("\n\t 1021 - Notas e Moedas.");
        int cedulas, temp, valorint;
        double valor, valor2;
        scanf("%lf", &valor);
        temp = valor;
        valorint = valor;
        valor2 = valor;

        puts("NOTAS:");
        cedulas = (temp - (temp%100))/100;
        printf("%d nota(s) de R$ 100.00\n", cedulas);
        temp = temp%100;

        cedulas = (temp - (temp%50))/50;
        printf("%d nota(s) de R$ 50.00\n", cedulas);
        temp = temp%50;

        cedulas = (temp - (temp%20))/20;
        printf("%d nota(s) de R$ 20.00\n", cedulas);
        temp = temp%20;

        cedulas = (temp - (temp%10))/10;
        printf("%d nota(s) de R$ 10.00\n", cedulas);
        temp = temp%10;

        cedulas = (temp -(temp%5))/5;
        printf("%d nota(s) de R$ 5.00\n", cedulas);
        temp = temp%5;

        cedulas = (temp - (temp%2))/2;
        printf("%d nota(s) de R$ 2.00\n", cedulas);
        temp = temp%2;

        puts("MOEDAS:");

        cedulas = (temp -(temp%1))/1;
        printf("%d moeda(s) de R$ 1.00\n", temp);
        temp = temp%1;
        valor = temp;
        valor2 = (valor2-valorint)*100;
        temp = valor2;

        cedulas = (temp-(temp%50))/50;
        printf("%d moeda(s) de R$ 0.50\n", cedulas);
        temp = temp%50;

        cedulas = (temp-(temp%25))/25;
        printf("%d moeda(s) de R$ 0.25\n", cedulas);
        temp = temp%25;

        cedulas = (temp-(temp%10))/10;
        printf("%d moeda(s) de R$ 0.10\n", cedulas);
        temp = temp%10;

        cedulas = (temp - (temp%5))/5;
        printf("%d moeda(s) de R$ 0.5\n", cedulas);
        temp = temp%5;

        cedulas = (temp - (temp%1))/1;
        printf("%d moeda(s) de R$ 0.1\n", cedulas);
        temp=temp%1;
        }

    if(setup == 35){
        puts("\n\t 1035 - Teste de Selecao 1");
        int A, B, C, D; scanf("%d %d %d %d", &A, &B, &C, &D);
        if((B > C && D > A) && (C+D > A+B) && (C > 0 && D > 0) && (A%2 == 0))
            printf("Valores aceitos\n");
        else
            printf("Valores nao aceitos\n");}

    if(setup == 36){
        puts("\n\t 1036 - Formula de Bhaskara");
        float a, b, c, delta, x, x2; scanf("%f %f %f", &a, &b, &c);
        delta = pow(b,2) - (4 * a*c);

        if((delta < 0) || (a == 0.0))
            printf("Impossivel calcular\n");
        else{
            x = (-b + pow(delta,.5))/(2*a);
            printf("R1 = %.5f\n", x);
            x2 = (-b - pow(delta,.5))/(2*a);
            printf("R2 = %.5f\n", x2);}}

    if(setup == 37){
        puts("\n\t 1037 - Intervalo");
        float n; scanf("%f", &n);
        if(n >= 0 && n <= 25)
            printf("Intervalo [0,25]\n");
        if(n > 25 && n <= 50)
            printf("Intervalo (25,50]\n");
        if(n > 50 && n <= 75)
            printf("Intervalo (50,75]\n");
        if(n > 75 && n<=100)
            printf("Intervalo (75,100]\n");
        if(n < 0 || n > 100)
            printf("Fora de intervalo\n");}

    if(setup == 38){
        puts("\n\t 1038 - Lanche");
        int p, q; scanf("%d %d", &p, &q);
        if(p == 1)
            printf("Total: R$ %.2f\n", q*4.00);
        if(p == 2)
            printf("Total: R$ %.2f\n", q*4.50);
        if(p == 3)
            printf("Total: R$ %.2f\n", q*5.00);
        if(p == 4)
            printf("Total: R$ %.2f\n", q*2.00);
        if(p == 5)
            printf("Total: R$ %.2f\n", q*1.50);}

    if(setup == 40){
        puts("\n\t 1040 - Media 3");
        float media, notaexame, n1, n2, n3, n4;
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        media = (n1*2 + n2*3 + n3*4 + n4*1)/(2 + 3 + 4 + 1);
        printf("Media: %.1f\n", media);
        if(media >= 7)
            printf("Aluno aprovado.\n");
        if(media < 5)
            printf("Aluno reprovado.\n");
        if(media >= 5 && media <= 6.9){
            printf("Aluno em exame.\n");
            scanf("%f", &notaexame);
            printf("Nota do exame: %.1f\n", notaexame);
            media = (notaexame + media)/2;
            if(media >= 5)
                printf("Aluno aprovado.\n");
            if(media <= 4.9)
                printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);}}

    if(setup == 41){
            puts("\n\t 1041 - Coordenadas de um Ponto");
            float x, y; scanf("%f %f", &x, &y);
            if(x>0 && y>0)
                printf("Q1\n");
            if(x<0 && y<0)
                printf("Q3\n");
            if(x>0 && y<0)
                printf("Q4\n");
            if(x<0 && y>0)
                printf("Q2\n");
            if(x==0 && (y>0 || y<0))
                printf("Eixo Y\n");
            if(y==0 && (x>0 || x<0))
                printf("Eixo X\n");
            if(x==0 && y==0)
                printf("Origem\n");}
    if(setup == 42){
            puts("\n\t 1042 - Sort Simples");
            int A, B, C; scanf("%d %d %d", &A, &B, &C);
            if(A<B && A<C){
                if(B<C)
                    printf("%d\n%d\n%d\n", A, B, C);
                else
                    printf("%d\n%d\n%d\n", A, C, B);}
            if(B<A && B<C){
                if(A<C)
                    printf("%d\n%d\n%d\n", B, A, C);
                else
                    printf("%d\n%d\n%d\n", B, C, A);}
            if(C<A && C<B){
                if(B<A)
                    printf("%d\n%d\n%d\n", C, B, A);
                else
                    printf("%d\n%d\n%d\n", C, A, B);}
            printf("\n%d\n%d\n%d\n", A, B, C);}

    if(setup == 43){
            puts("\n\t 1043 - Triangulo");
            float a,b,c,perm,area;
            while(scanf("%f %f %f",&a,&b,&c)==3){
            if(a+b>c && b+c>a && a+c>b ){
            perm=a+b+c;
            printf("Perimetro = %.1f\n",perm);}
            else{
                  area=.5*(a+b)*c;
                  printf("Area = %.1f\n",area);}}}

    if(setup == 44){
            puts("\n\t 1044 - Multiplos");
            int a, b, div; scanf("%d%d", &a, &b);
            if(a>b)
               if(a%b == 0)
                printf("Sao Multiplos\n");
               else
                printf("Nao sao Multiplos\n");
            if(b>a)
               if(b%a == 0)
                printf("Sao Multiplos\n");
               else
                printf("Nao sao Multiplos\n");
            if(a == b)
                printf("Sao Multiplos\n");}
    return 0;
}
