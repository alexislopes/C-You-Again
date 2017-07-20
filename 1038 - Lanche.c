#include <stdio.h>
 
int main() {
int p, q; scanf("%d %d", &p, &q);
        if(p == 1)
            printf("Total: R$ %.2f\n", q*4.00);
        if(p == 2)
            printf("Total: R$ %.2f\n", q*4.50);
        if(p == 3)
            printf("Total: R$ %.2f\n", q*5.00);
        if(p == 4)
            printf("Total: R$ %.2f\n", q*2.00);
        if(p == 5)
            printf("Total: R$ %.2f\n", q*1.50);
 
    return 0;
}
