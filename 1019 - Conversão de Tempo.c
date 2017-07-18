#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  puts("\n\t 1019 - Conversao de Tempo.");
  long int tempo, hora, minuto, seg;
  scanf("%ld",&tempo);
  hora=tempo/3600;
  seg=tempo%3600;
  minuto=seg/60;
  seg=seg%60;
  printf("%ld:%ld:%ld\n",hora,minuto,seg);
  
  return 0;}
