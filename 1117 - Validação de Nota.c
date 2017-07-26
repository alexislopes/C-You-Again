#include <stdio.h>
 
int main() {
        float a, b, i=0, k=0;
        while(1){
            if(i==2)
                break;

            scanf("%f", &a);
            if(a>=0 && a<=10){
                i++;
                k+=a;}

            else{
                printf("nota invalida\n");}}
        b=k/2.00;
        printf("media = %.2f\n", b);
 
    return 0;
}
