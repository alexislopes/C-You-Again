#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int setup;
    puts("45 - Tipos de Triangulo\n46 - Tempo de Jogo\n47 - Tempo de Jogo com Minutos\n48 - Aumento de Salario\n49 - Animal\n50 - DDD");
    puts("51 - Imposto de Renda\n52 - Mes\n59 - Numeros Pares\n60 - numeros Positivos\n61 - Tempo de um Evento");
    printf("\nEscolha um Exercicio: ");
    scanf("%d", &setup);

    if(setup == 45){
        puts("\n\t 1045 - Tipos de Triangulos");
        float a, b, c,aux; scanf("%f%f%f", &a, &b, &c);
        if(a<b){
            aux = a;
            a = b;
            b = aux;}
        if(b<c){
            aux = b;
            b = c;
            c = aux;}
        if(a<b){
            aux = a;
            a = b;
            b = aux;}
        if(a>= b+c)
            printf("NAO FORMA TRIANGULO\n");
        else if(pow(a,2) == pow(b,2)+pow(c,2))
            printf("TRIANGULO RETANGULO\n");
        else if(pow(a,2) > pow(b,2)+pow(c,2))
            printf("TRIANGULO OBTUSANGULO\n");
        else if(pow(a,2) < pow(b,2)+pow(c,2))
            printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
        else if(a==b || b==c)
            printf("TRIANGULO ISOSCELES\n");}

    if(setup == 46){
        puts("\n\t 1046 - Tempo de Jogo");
        int hi, hf, ht;
        scanf("%d%d", &hi, &hf);
        ht = hf - hi;
        if(ht < 0)
            ht = 24+(hf - hi);
        if(hi == hf)
            printf("O JOGO DUROU 24 HORA(S)\n");
        else
            printf("O JOGO DUROU %d HORA(S)\n", ht);}

    if(setup == 47){
        puts("\n\t 1047 - Tempo de Jogo com Minutos");
        int hora1, minuto1, hora2, minuto2, totalh, totalm;
        scanf("%d %d %d %d", &hora1, &minuto1, &hora2, &minuto2);
        totalh = hora2 - hora1;
        if(totalh < 0){
            totalh = 24+(hora2 - hora1);}
        totalm = minuto2 - minuto1;
        if(totalm < 0){
            totalm = 60+(minuto2 - minuto1);
            totalh--;}
        if(hora1 == hora2 && minuto1 == minuto2)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalm);}

    if(setup == 48){
        puts("\n\t 1048 - Aumento de Salario");
        float salario, aux; int perc; scanf("%f", &salario);
        if(salario >= 0 && salario <= 400.00){
            perc = 15;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario>= 400.01 && salario <=800.00){
            perc = 12;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario>= 800.01 && salario<=1200.00){
            perc = 10;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario>=1200.01 && salario<=2000.00){
            perc = 7;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario > 2000.00){
            perc = 4;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, aux, perc);}

    if(setup == 49){
        puts("\n\t 1049 - Animal");
        char palavra1[20], palavra2[20], palavra3[20];
        scanf("%s %s %s", &palavra1, &palavra2, &palavra3);

        if(palavra1[0] == 'v'){
           if(palavra2[0] == 'a'){
            if(palavra3[0] == 'c')
                printf("aguia\n");
            else if(palavra3[0] == 'o')
                printf("pomba\n");}}

        if(palavra1[0] == 'v'){
            if(palavra2[0] == 'm'){
                if(palavra3[0] == 'o')
                    printf("homem\n");
                else if(palavra3[0] == 'h')
                    printf("vaca\n");}}

        if(palavra1[0] == 'i'){
            if(palavra2[0] == 'i'){
                if(palavra3[2] == 'm')
                    printf("pulga\n");
                else if(palavra3[2] == 'r')
                    printf("lagarta\n");}}

        if(palavra1[0] == 'i'){
            if(palavra2[0] == 'a'){
                if(palavra3[0] == 'h')
                    printf("sanguessuga\n");
                else if(palavra3[0] == 'o')
                    printf("minhoca");}}}

    if(setup == 50){
        puts("\n\t 1050 - DDD");
        int d; scanf("%d", &d);

        switch(d){
        case 61:
            printf("Brasilia\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 11:
            printf("Sao Paulo\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        default:
            printf("DDD nao cadastrado\n");}}

    if(setup == 51){
        puts("\n\t 1051 - Imposto de Renda");
        float a, b; scanf("%f", &a);
        if(a>=0 && a<=2000.00)
            printf("Isento\n");

        else if(a>=2000.01 && a<=3000.00){
            a = a - 2000;
            b = a * 0.08;
            printf("R$ %.2f\n", b);}

        else if(a>=3000.01 && a<=4500.00){
            a = a - 3000;
            b = a * 0.18 + 80;
            printf("R$ %.2f\n", b);}

        else{
            a = a - 4500;
            b = a*0.28+350;
            printf("R$ %.2f\n", b);}}

    if(setup == 52){
        puts("\n\t 1052 - Mes");
        int m; scanf("%d", &m);

        switch(m){
            case 1:
                printf("January\n");
                break;
            case 2:
                printf("February\n");
                break;
            case 3:
                printf("March\n");
                break;
            case 4:
                printf("April\n");
                break;
            case 5:
                printf("May\n");
                break;
            case 6:
                printf("June\n");
                break;
            case 7:
                printf("July\n");
                break;
            case 8:
                printf("August\n");
                break;
            case 9:
                printf("September\n");
                break;
            case 10:
                printf("October\n");
                break;
            case 11:
                printf("November\n");
                break;
            case 12:
                printf("December\n");}}

    if(setup == 59){
        puts("\n\t 1059 - Numeros Pares");
        int n;
        for(n = 1; n <= 100; n++)
            if(n%2 == 0)
                printf("%d\n", n);}

    if(setup == 60){
        puts("\n\t 1060 - Numeros Positivos ");
        float n1, n2, n3, n4, n5, n6;
        int v[10], cont = 0, n;
        for(n=0; n<6; n++)
            scanf("%f", &v[n]);
        for(n=0; n<6; n++)
            if(v[n] > 0)
                cont++;
        printf("%d valores positivos\n", cont);}

    if(setup == 61){
        puts("\n\t 1061 - Tempo de um Evento");
        int d1, h1, m1, s1;
        int d2, h2, m2, s2;
        char d[10];

        scanf("%s %d %d %s %d %s %d", &d, &d1, &h1, &d, &m1, &d, &s1);
        scanf("%s %d %d %s %d %s %d", &d, &d2, &h2, &d, &m2, &d, &s2);

        int q1, q2;
        q1 = s1 + m1*60 + h1*60*60 + d1*60*60*24;
        q2 = s2 + m2*60 + h2*60*60 + d2*60*60*24;
        int tempo = q2 - q1;

        printf("%d dia(s)\n", tempo/(60*60*24)); tempo = tempo%(60*60*24);
        printf("%d hora(s)\n", tempo/(60*60)); tempo = tempo%(60*60);
        printf("%d minuto(s)\n", tempo/(60)); tempo = tempo%(60);
        printf("%d segundo(s)\n", tempo);
    }
}
