#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0. 20, ..., 300 */
main(){
  float fahr, celsius;
  float lower, upper, step;

  lower = 0.0f;
  upper = 300.0f;
  step = 20.0f;

  fahr = lower;
  while (fahr<=upper){

    celsius = 5.0*(fahr - 32)/9.0;
    printf("%3.0f\t%5.2f\n", fahr,celsius );

    fahr += step;
  }
}
