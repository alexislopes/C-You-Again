#include <stdio.h>
 
int main() {
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
                soma=0;}}
    return 0;
}
