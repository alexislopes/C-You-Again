#include <stdio.h>
 
int main() {
        int i, j, n;
        i=1; j=60;
        printf("I=%d J=%d\n",i, j);
        for(n=0; j>0; n++){
            i+=3;
            j-=5;
            printf("I=%d J=%d\n", i,j);}
 
    return 0;
}
