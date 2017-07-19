#include <stdio.h>
 
int main() {

  int hora1, minuto1, hora2, minuto2, totalh, totalm;
  scanf("%d %d %d %d", &hora1, &minuto1, &hora2, &minuto2);
  totalh = hora2 - hora1;
  if(totalh < 0){
      totalh = 24+(hora2 - hora1);}
  totalm = minuto2 - minuto1;
  if(totalm < 0){
      totalm = 60+(minuto2 - minuto1);
      totalh--;}
  if(hora1 == hora2 && minuto1 == minuto2)
      printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  else
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalm);
 
    return 0;}
