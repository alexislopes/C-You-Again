#include <stdio.h>
 
int main() {

        float a, media = 0;
        int cont = 0, n;
        for(n=0; n<6; n++){
            scanf("%f", &a);
            if(a > 0){
                cont++;
                media=media + a;}}
        media=media/cont;
        printf("%d valores positivos\n%.1f\n", cont, media);
    return 0;}
