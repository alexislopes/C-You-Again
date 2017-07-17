#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  puts("\t 1008 - Salario");
  int numero, hora;
  float salario, porhora;
  scanf("%d %d %f", &numero, &hora, &porhora);
  salario = hora * porhora;
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);
  
  return 0;}
