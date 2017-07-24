#include <stdio.h>
 
int main() {
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
        printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", a, b, c);
 
    return 0;
}
