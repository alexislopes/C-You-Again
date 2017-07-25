#include <stdio.h>
 
int main() {
        int n, cont=0;
        float x, y;  scanf("%d", &n);
        while(cont<n){
            scanf("%f%f", &x, &y);
            if(y==0){
                printf("divisao impossivel\n");
                cont+=1;}
            else{
                printf("%.1f\n", x/y);
                cont+=1;}}
 
    return 0;
}
