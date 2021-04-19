#include <stdio.h>

void main(){
// 506141
int input, km, m, cm;
printf("input\t: ");
scanf("%i", &input);

km = input / 100000;
m = input / 100 % 1000;
cm = input % 100;

printf("output\t: %i km, %i m, %i cm\n", km, m, cm);
}