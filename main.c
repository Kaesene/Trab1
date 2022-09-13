#include <stdio.h>

float main() {
  float F,C;
  printf("Digite a temperatura que deseja converter de Fahrenheit para Celsius\n");
  scanf("%f",&F);
  C = ((F-32)/9)*5;
  printf("%.01f Graus Celsius",C);
  
  
}