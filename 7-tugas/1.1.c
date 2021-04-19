#include <stdio.h>

void main(){
  char input[5] = {"1 2 3"};
  
  printf("input \t: %s\n", input);
  for (int i = 0; i <= 5; i+=2){
    char tmp;
    if (i == 0){
      tmp = input[i];
      continue;
    }
    input[i - 2] = input[i];
    if(i == 4){
      input[i] = tmp;
    }
  }
  printf("output \t: %s\n", input);
}



