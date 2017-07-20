#include <stdio.h>
 
int main() {
float a, b, c, delta, x, x2; scanf("%f %f %f", &a, &b, &c);
        delta = pow(b,2) - (4 * a*c);

        if((delta < 0) || (a == 0.0))
            printf("Impossivel calcular\n");
        else{
            x = (-b + pow(delta,.5))/(2*a);
            printf("R1 = %.5f\n", x);
            x2 = (-b - pow(delta,.5))/(2*a);
            printf("R2 = %.5f\n", x2);}
 
    return 0;
}
