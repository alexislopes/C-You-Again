#include <stdio.h>
#include <stdlib.h>

int main()
{
    int setup;
    puts("78 - Tabuada\n79 - Medias Ponderadas\n80 - Maio e Posicao\n94 - Experiencias\n95 - Sequencia IJ 1");
    puts("96 - Sequencia IJ 2\n97 - Sequencia IJ 3\n98 - Sequencia IJ 4\n99 - Soma de Impares Consecultivos II\n101 - Sequencia de Numeros e Soma\n");
    printf("Escolha um Exercicio: "); scanf("%d", &setup);

    if(setup == 78){
        puts("\n\t 1078 -  Tabuada");
        int n, i; scanf("%d", &n);
        for(i=1; i<=10; i++)
            printf("%d x %d = %d\n", i, n, i*n);}

    if(setup == 79){
        puts("\n\t 1079 - Medias Ponderadas");
        int n, i;
        float prod, x1, x2, x3;
        scanf("%d", &n);

        for(i=0; i<n; i++){
            scanf("%f%f%f", &x1, &x2, &x3);
        prod = ((x1*2)+(x2*3)+(x3*5))/10;
        printf("%.1f\n", prod);}}

    if(setup = 80){
        puts("\n\t 1080 - Maior e Posicao");
        int d=0, x=0, a, b, c, e;
        for(a=1; a<=100; a++){
            scanf("%d", &b);
            x++;
            if(b>d){
                e=x;
                d=b;}}
        printf("%d\n", d);
        printf("%d\n", e);}

    if(setup == 94){
        puts("\n\t 1094 - Experiencias");
        int n, rato=0, sapo=0, coelho=0, i, x;
        double a, b, c;
        char inicial[5];
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d %s", &x, &inicial);
            if(inicial[0] == 'R'){
                rato=rato+x;}
            else if(inicial[0] == 'S'){
                sapo=sapo+x;}
            else if(inicial[0] == 'C'){
                coelho=coelho+x;}}
        x = coelho + rato + sapo;
        a=(coelho/(x*1.0))*100.00;
        b=(rato/(x*1.0))*100.00;
        c=(sapo/(x*1.0))*100.00;
        printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", x, coelho, rato, sapo);
        printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", a, b, c);}

    if(setup == 95){
        puts("\n\t 1095 - Sequencia IJ 1");
        int i, j, n;
        i=1; j=60;
        printf("I=%d J=%d\n",i, j);
        for(n=0; j>0; n++){
            i+=3;
            j-=5;
            printf("I=%d J=%d\n", i,j);}}

    if(setup == 96){
        puts("\n\t 1096 - Sequencia IJ 2");
        int i, j;
        for(i=1; i<=9; i=i+2){
                for(j=7; j>=5; j--)
                    printf("I=%d J=%d\n", i, j);}}

    if(setup == 97){
        puts("\n\t - Squencia IJ 3");
        int i, j;
        int n=7, m;
        for(i=1; i<=9; i+=2){
            for(j=n, m=1;m<=3;m++, j--)
                printf("I=%d J=%d\n", i, j);
            n+=2;}}

    if(setup == 98){
        puts("\n\t 1098 - Sequencia IJ 4");
        double a,b,c=1,d=3,e,f;
        int x;
        for(a=0; a<=1.9; a=a+.2)
        {
            for(b=1.0; b<=3.0; b++)
            {
                e=b+a;
                if(a==0.0||a==1.0) printf("I=%.0lf J=%.0lf",a,e);
                else if(e==3.0||e==4.0||e==5.0) printf("I=%.0lf J=%.0lf",a,e);
                else printf("I=%.1lf J=%.1lf",a,e);
                printf("\n");
            }
        }
        for(x=3; x<=5; x++) printf("I=2 J=%d\n",x);}

    if(setup == 99){
        puts("\n\t 1099 - Soma de Impares Consecultivos II");
        int n, x, y, i, soma=0, j, k; scanf("%d", &n);
        for(j=1; j<=n; j++){
            scanf("%d%d", &x,&y);
            if(x==y){
                soma=0;
                printf("%d\n", soma);
            }
            else if(x<y){
                for(i=x+1, soma=0; i<y; i++){
                    if(i%2!=0)
                        soma+=i;}
                printf("%d\n", soma);}
            else{
                for(k=y+1, soma=0; k<x; k++){
                    if(k%2!=0)
                        soma+=k;}
                printf("%d\n", soma);}}}

    if(setup == 101){
        puts("\n\t 1101- Squencia de Numeros e Soma");
        int m, n, i, soma=0;
        while(1){
            scanf("%d %d", &m, &n);
            if(m<=0 || n<=0)
                break;
            else if(m>n){
                for(i=n; i<=m; i++){
                    soma+=i;
                    printf("%d ", i);}
                printf("Sum=%d\n", soma);
                soma=0;}
            else{
                for(i=m; i<=n; i++){
                    soma+=i;
                    printf("%d ", i);}
                printf("Sum=%d\n", soma);
                soma=0;}}}

    return 0;
}
