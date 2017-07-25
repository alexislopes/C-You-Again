#include <stdio.h>
 
int main() {
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
                printf("%d\n", soma);}}
 
    return 0;
}
