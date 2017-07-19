#include <stdio.h>
 
int main() {
        
        char palavra1[20], palavra2[20], palavra3[20];
        scanf("%s %s %s", &palavra1, &palavra2, &palavra3);

        if(palavra1[0] == 'v'){
           if(palavra2[0] == 'a'){
            if(palavra3[0] == 'c')
                printf("aguia\n");
            else if(palavra3[0] == 'o')
                printf("pomba\n");}}

        if(palavra1[0] == 'v'){
            if(palavra2[0] == 'm'){
                if(palavra3[0] == 'o')
                    printf("homem\n");
                else if(palavra3[0] == 'h')
                    printf("vaca\n");}}

        if(palavra1[0] == 'i'){
            if(palavra2[0] == 'i'){
                if(palavra3[2] == 'm')
                    printf("pulga\n");
                else if(palavra3[2] == 'r')
                    printf("lagarta\n");}}

        if(palavra1[0] == 'i'){
            if(palavra2[0] == 'a'){
                if(palavra3[0] == 'h')
                    printf("sanguessuga\n");
                else if(palavra3[0] == 'o')
                    printf("minhoca\n");}}
 
    return 0;
}
