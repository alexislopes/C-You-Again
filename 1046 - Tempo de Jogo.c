#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int hi, hf, ht;
  scanf("%d%d", &hi, &hf);
  ht = hf - hi;
  if(ht < 0)
      ht = 24+(hf - hi);
  if(hi == hf)
      printf("O JOGO DUROU 24 HORA(S)\n");
  else
      printf("O JOGO DUROU %d HORA(S)\n", ht);
      
  return 0}
