#include <stdio.h>
 
int main() {

        float n1, n2, n3, n4, n5, n6;
        int v[10], cont = 0, n;
        for(n=0; n<6; n++)
            scanf("%f", &v[n]);
        for(n=0; n<6; n++)
            if(v[n] > 0)
                cont++;
        printf("%d valores positivos\n", cont);
 
    return 0;}
