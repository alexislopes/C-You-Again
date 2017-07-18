#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  puts("\n\t 1020 - Idade em Dias.");
  int qnt, ano, mes, dia;
  scanf("%d", &qnt);
  ano = qnt/365;
  dia = qnt%365;
  mes = dia/30;
  dia = dia%30;
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);}
  
  return 0;}
