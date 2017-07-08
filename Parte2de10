#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int setup;
    puts("11 - Esfera.\n12 - Area.\n13 - O Maior.\n14 - Consumo.\n15 - Distancia Entre Dois Pontos.");
    puts("16 - Distancia\n17 - Gasto de Combustivel.\n18 - Cedulas.\n19 - Conversao de Tempo.\n20 - Idade em Dias.\n");
    printf("Escolha um Exercicio: ");
    scanf("%d", &setup);

    if(setup == 11){ // 1011 - Esfera.
        puts("\n\t 1011 - Esfera.");
        double raio, volume;
        scanf("%lf", &raio);
        volume = (4.0/3) * 3.14159 * pow(raio,3);
        printf("VOLUME = %.3lf\n", volume);}

    if(setup == 12){ // 1012 - Area.
        puts("\n\t 1012 - Area");
        double A, B, C;
        double TRI, CIR, TRA, QUA, RET;
        scanf("%lf %lf %lf", &A, &B, &C);
        TRI = (A*C)/2;
        CIR = pow(C,2) * 3.14159;
        TRA = ((A+B)*C)/2;
        QUA = B*B;
        RET = A*B;
        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRI, CIR, TRA, QUA, RET);}

    if(setup == 13){ // 1013 - O Maior.
        puts("\n\t 1013 - O Maior.");
        int a, b, c, maior;
        scanf("%d %d %d", &a, &b, &c);
        maior = (a + b + abs(a - b))/2;
        maior = (maior + c + abs(maior - c))/2;
        printf("%d eh o maior\n", maior);}

    if(setup == 14){ // 1014 - Consumo.
        puts("\n\t 1014 - Consumo.");
        int x;
        float y;
        scanf("%d %f", &x, &y);
        printf("%.3f km/l\n", x/y);}

    if(setup == 15){ // 1015 - Distancia Entre Dois Pontos.
        puts("\n\t 1015 - Distancia Entre Dois Pontos.");
        float x1, x2, y1, y2, distancia;
        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
        distancia = pow((x2-x1),2) + pow((y2-y1),2);
        distancia = sqrt(distancia);
        printf("%.4f\n", distancia);}

    if(setup == 16){ // 1016 - Distancia.
        puts("\n\t 1016 - Distancia.");
        int x;
        scanf("%d", &x);
        printf("%d minutos\n", x*2);}

    if(setup == 17){ //1017 - Gasto de Combustivel.
        puts("\n\t 1017 - Gasto de Combustivel.");
        int tempo, velocidade;
        double quantidade;
        scanf("%d %d", &tempo, &velocidade);
        quantidade = (tempo*velocidade)/12.0;
        printf("%.3lf\n", quantidade);}

    if(setup == 18){ // 1018 - Cedulas.
        puts("\n\t 1018 - Cedulas.");
        int valor, cedulas;
        scanf("%d", &valor);
        printf("%d\n", valor);

        cedulas = (valor - (valor%100))/100;
        printf("%d nota(s) de R$ 100,00\n", cedulas);
        valor = valor%100;

        cedulas = (valor - (valor%50))/50;
        printf("%d nota(s) de R$ 50,00\n", cedulas);
        valor = valor%50;

        cedulas = (valor - (valor%20))/20;
        printf("%d nota(s) de R$ 20,00\n", cedulas);
        valor = valor%20;

        cedulas = (valor - (valor%10))/10;
        printf("%d nota(s) de R$ 10,00\n", cedulas);
        valor = valor%10;

        cedulas = (valor-(valor%5))/5;
        printf("%d nota(s) de R$ 5,00\n", cedulas);
        valor = valor%5;

        cedulas = (valor- (valor%2))/2;
        printf("%d nota(s) de R$ 2,00\n", cedulas);
        valor = valor%2;

        cedulas = (valor-(valor%1))/1;
        printf("%d nota(s) de R$ 1,00\n", cedulas);}

    if(setup == 19){// 1019 - conversão de Tempo.
        puts("\n\t 1019 - Conversao de Tempo.");
        long int tempo, hora, minuto, seg;
        scanf("%ld",&tempo);
        hora=tempo/3600;
        seg=tempo%3600;
        minuto=seg/60;
        seg=seg%60;
        printf("%ld:%ld:%ld\n",hora,minuto,seg);}

    if(setup == 20){// 1020 - Idade em Dias.
        puts("\n\t 1020 - Idade em Dias.");
        int qnt, ano, mes, dia;
        scanf("%d", &qnt);
        ano = qnt/365;
        dia = qnt%365;
        mes = dia/30;
        dia = dia%30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);}
    return 0;
}
