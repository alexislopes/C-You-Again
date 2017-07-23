#include <stdio.h>
#include <stdlib.h>

int main()
{
    int setup;
    puts("46 - Positivos e Media\n65 - Pares entre Cinco Numeros\n66 - Pares, Impares, Positivos e Negativos\n67 - Numeros Impares\n70 - Seis Numeros Impares");
    puts("71 - Soma de Impares Consecutivos I\n72 - Intervalo 2\n73 - Quadrado de Pares\n74 - Par ou Impar\n75 - Resto 2");
    printf("\nEscolha um exercicio: "); scanf("%d", &setup);

    if(setup == 46){
        puts("\n\t 1046 - Positivos e Media");
        float a, media = 0;
        int cont = 0, n;
        for(n=0; n<6; n++){
            scanf("%f", &a);
            if(a > 0){
                cont++;
                media=media + a;}}
        media=media/cont;
        printf("%d valores positivos\n%.1f", cont, media);}

    if(setup == 65){
        puts("\n\t 1065 - Pares entre Cinco Numeros");
        int a, cont=0, i;
        for(i=0; i<5; i++){
            scanf("%d", &a);
            if(a%2==0){
                cont++;}}
        printf("%d valores pares\n", cont);}

    if(setup == 66){
        puts("\n\t 1066 - Pares, Impares, Positivos e Negativos");
        int a, pos=0, neg=0, imp=0, par=0, i, cont=0;

        for(i=0; i<5; i++){
            scanf("%d", &a);
            if(a<0)neg++;
            if(a>0)pos++;
            if(a%2==0)par++;
            if(a%2==1 || a%2==-1)imp++;}

        printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);}

    if(setup == 67){
        puts("\n\t 1067 - Numeros Impares");
        int x, i;
        scanf("%d", &x);
        for(i=0; i<=x; i++){
            if(i%2!=0)
                printf("%d\n", i);}}

    if(setup == 70){
        puts("\n\t 1070 - Seis Numeros Impares");
        int x, i, j;
        scanf("%d", &x);
        if(x%2==0)
        {
            for(i=x+1; i<=x+11; i+=2)
                printf("%d\n", i);
        }
        else{
            for(j=x; j<=x+10; j+=2)
                printf("%d\n", j);
        }}

    if(setup == 71){
        puts("\n\t 1071 - Soma de Impares Consecultivos 1");
        int x, y, soma=0;
        scanf("%d%d", &x, &y);
        if(y==x)
            printf("%d\n", soma);
        else if(x<y){
            for(x=x+1; x<y; x++)
                if(x%2!=0){
                    soma+=x;}
            printf("%d\n", soma);}

        else if(x>y){
            for(y=y+1; y<x; y++){
                if(y%2!=0){
                    soma+=y;}}
            printf("%d\n", soma);}}

    if(setup == 72){
        puts("\n\t 1072 - Intervalo 2");
        int n, x, i, cont=0, cont2=0;
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &x);
            if(x>=10 && x<=20){
                cont=cont+1;}
            else if(x<10 || x>20){
                cont2=cont2+1;}}
        printf("%d in\n", cont);
        printf("%d out\n", cont2);}

    if(setup == 73){
        puts("\n\t 1072 - Quadrado de Pares");
        int n, i; scanf("%d", &n);
        for(i=1; i<=n; i++)
            if(i%2==0){
                printf("%d^2 = %d\n", i, i*i);}}

    if(setup == 74){
        puts("\n\t 1074 - Par ou Impar");
        int n, x, i; scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &x);
            if(x==0)
                printf("NULL\n");
            else if(x<0 && x%2==0)
                printf("EVEN NEGATIVE\n");
            else if(x<0 && x%2!=0)
                printf("ODD NEGATIVE\n");
            else if(x>0 && x%2==0)
                printf("EVEN POSITIVE\n");
            else if(x>0 && x%2!=0)
                printf("ODD POSITIVE\n");}}

    if(setup == 75){
        puts("\n\t 1075 - Resto 2");
        int n, i; scanf("%d", &n);
        for(i=0; i<=10000; i++)
            if(i%n==2)
                printf("%d\n", i);}

    return 0;

}
