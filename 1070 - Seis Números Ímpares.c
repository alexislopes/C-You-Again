#include <stdio.h>
 
int main() {
        int x, i, j;
        scanf("%d", &x);
        if(x%2==0)
        {
            for(i=x+1; i<=x+11; i+=2)
                printf("%d\n", i);
        }
        else{
            for(j=x; j<=x+10; j+=2)
                printf("%d\n", j);
        }
    return 0;
}
