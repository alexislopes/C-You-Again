#include <stdio.h>
 
int main() {
        float media, notaexame, n1, n2, n3, n4;
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        media = (n1*2 + n2*3 + n3*4 + n4*1)/(2 + 3 + 4 + 1);
        printf("Media: %.1f\n", media);
        if(media >= 7)
            printf("Aluno aprovado.\n");
        if(media < 5)
            printf("Aluno reprovado.\n");
        if(media >= 5 && media <= 6.9){
            printf("Aluno em exame.\n");
            scanf("%f", &notaexame);
            printf("Nota do exame: %.1f\n", notaexame);
            media = (notaexame + media)/2;
            if(media >= 5)
                printf("Aluno aprovado.\n");
            if(media <= 4.9)
                printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);}
    return 0;
}
