#include <stdio.h>
 
int main() {
        int n, i;
        float prod, x1, x2, x3;
        scanf("%d", &n);

        for(i=0; i<n; i++){
            scanf("%f%f%f", &x1, &x2, &x3);
        prod = ((x1*2)+(x2*3)+(x3*5))/10;
        printf("%.1f\n", prod);}
 
    return 0;
}
