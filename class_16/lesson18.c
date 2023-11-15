#include <stdio.h>
#include <math.h>
int main() {
 float a=0.01, b=1.5*M-PI, x, delta_x=1.e-3/*0.001*/, funkca, funkcb, funkcx;
 int k=0;

 funkca = sin(a); funkcb = sin(b);
 if(funkca*funkcb>0){
 printf("
