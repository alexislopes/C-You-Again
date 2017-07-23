#include <stdio.h>
 
int main() {
        int x, y, soma=0;
        scanf("%d%d", &x, &y);
        if(y==x)
            printf("%d\n", soma);
        else if(x<y){
            for(x=x+1; x<y; x++)
                if(x%2!=0){
                    soma+=x;}
            printf("%d\n", soma);}

        else if(x>y){
            for(y=y+1; y<x; y++){
                if(y%2!=0){
                    soma+=y;}}
            printf("%d\n", soma);}
    return 0;
}
