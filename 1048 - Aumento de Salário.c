#include <stdio.h>
 
int main() {

        float salario, aux; int perc; scanf("%f", &salario);
        if(salario >= 0 && salario <= 400.00){
            perc = 15;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario>= 400.01 && salario <=800.00){
            perc = 12;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario>= 800.01 && salario<=1200.00){
            perc = 10;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario>=1200.01 && salario<=2000.00){
            perc = 7;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        else if(salario > 2000.00){
            perc = 4;
            aux = (salario*perc)/100;
            salario = salario + aux;}
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, aux, perc);
 
    return 0;}
