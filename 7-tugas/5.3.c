#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("%i", a);
}

void main(){
  int a, b;
  printf("input : ");
  scanf("%i %i", &a, &b);
  gcd(a, b);
}