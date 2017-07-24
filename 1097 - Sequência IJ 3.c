#include <stdio.h>
 
int main() {
        int i, j;
        int n=7, m;
        for(i=1; i<=9; i+=2){
            for(j=n, m=1;m<=3;m++, j--)
                printf("I=%d J=%d\n", i, j);
            n+=2;}
    return 0;
}
