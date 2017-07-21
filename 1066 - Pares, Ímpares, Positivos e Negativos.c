#include <stdio.h>
 
int main() {
        int a, pos=0, neg=0, imp=0, par=0, i, cont=0;
        for(i=0; i<5; i++){
            scanf("%d", &a);
            if(a<0)neg++;
            if(a>0)pos++;
            if(a%2==0)par++;
            if(a%2==1 || a%2==-1)imp++;}

        printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);
    return 0;
}
