#include <stdio.h>

int main() {
   int armstrong, check, num, count = 0;
   printf("input : ");
   scanf("%i", &armstrong);
   check = armstrong;

   while(check != 0) {
      num = check % 10;
      count = count + (num * num * num);
      check = check / 10;
   }

   if(count == armstrong) 
      printf("True\n");
   else 
      printf("False\n");
      
   return 0;
}