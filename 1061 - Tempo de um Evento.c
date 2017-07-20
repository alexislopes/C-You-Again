#include <stdio.h>
 
int main() {
    
        int d1, h1, m1, s1;
        int d2, h2, m2, s2;
        char d[10];

        scanf("%s %d %d %s %d %s %d", &d, &d1, &h1, &d, &m1, &d, &s1);
        scanf("%s %d %d %s %d %s %d", &d, &d2, &h2, &d, &m2, &d, &s2);

        int q1, q2;
        q1 = s1 + m1*60 + h1*60*60 + d1*60*60*24;
        q2 = s2 + m2*60 + h2*60*60 + d2*60*60*24;
        int tempo = q2 - q1;

        printf("%d dia(s)\n", tempo/(60*60*24)); tempo = tempo%(60*60*24);
        printf("%d hora(s)\n", tempo/(60*60)); tempo = tempo%(60*60);
        printf("%d minuto(s)\n", tempo/(60)); tempo = tempo%(60);
        printf("%d segundo(s)\n", tempo);
 
    return 0;}
