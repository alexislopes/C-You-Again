#include <stdio.h>
 
int main() {
int a, b, div; scanf("%d%d", &a, &b);
            if(a>b)
               if(a%b == 0)
                printf("Sao Multiplos\n");
               else
                printf("Nao sao Multiplos\n");
            if(b>a)
               if(b%a == 0)
                printf("Sao Multiplos\n");
               else
                printf("Nao sao Multiplos\n");
            if(a == b)
                printf("Sao Multiplos\n");
 
    return 0;
}
