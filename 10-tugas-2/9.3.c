#include <stdio.h>
#include <string.h>

void stringType(char *string[64]){
  int stringLength = strlen(string);
  // printf("%d\n", stringLength);
  int typeOfString[2] = {0, 0};
    printf("%i\n", *string[1]);
  for (int i = 0; i < stringLength; i++)
  {
    if ((char)string[i] >= 48 && (char)string[i] <= 57)
    {
      typeOfString[0] = 1;
    }
    if((char)string[i] >= 65 && (char)string[i] <= 90 || (char)string[i] >= 97 && (char)string[i] <= 122 ){
      typeOfString[1] = 1;
      printf("ok\n");
    }
  }
    printf("output: %d : %d\n\n", typeOfString[0], typeOfString[1]);
  if(typeOfString[0] == 1 && typeOfString[1] == 1){
    printf("output: %s", "Undefined\n\n");
  } else if(typeOfString[0] == 1){
    printf("output: %s", "Numeric\n\n");
  } else {
    printf("output: %s", "Alphabet\n\n");
  }
}

void main(){
  char string[64];
  char *ptr_string = &string;

  printf("input : ");
  gets(ptr_string);
  stringType(ptr_string);
}