#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

  puts("\n\t 1012 - Area");
  double A, B, C;
  double TRI, CIR, TRA, QUA, RET;
  scanf("%lf %lf %lf", &A, &B, &C);
  TRI = (A*C)/2;
  CIR = pow(C,2) * 3.14159;
  TRA = ((A+B)*C)/2;
  QUA = B*B;
  RET = A*B;
  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRI, CIR, TRA, QUA, RET);
  
  return 0;}
