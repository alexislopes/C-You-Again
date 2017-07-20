#include <stdio.h>
 
int main() {
    
        int a, cont=0, i;
        for(i=0; i<5; i++){
            scanf("%d", &a);
            if(a%2==0){
                cont++;}}
        printf("%d valores pares\n", cont);
 
    return 0;
}
