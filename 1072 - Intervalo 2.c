#include <stdio.h>
 
int main() {
        int n, x, i, cont=0, cont2=0;
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &x);
            if(x>=10 && x<=20){
                cont=cont+1;}
            else if(x<10 || x>20){
                cont2=cont2+1;}}
        printf("%d in\n", cont);
        printf("%d out\n", cont2);
 
    return 0;
}
