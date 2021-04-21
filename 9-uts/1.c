#include <stdio.h>
#include <string.h>

void main(){
  char people1[32], people2[32], action[64],who[32];
  int howMuch;

  printf("Name-1 : ");
  scanf("%s",&people1);
  printf("Name-2 : ");
  scanf("%s", &people2);
  printf("Perintah : ");
  scanf("%s %s %i", &who, &action, &howMuch);

  printf("%s ", who);
  if(strcmp(action, "hutang") == 0){
    printf("berhutang ");
  }else{
    printf("membayar ");
  }

  if (strcmp(who, people1) == 0){
    strcpy(who, people2);
  }else{
    strcpy(who, people1);
  }

  printf("kepada %s sebanyak Rp.%i\n", who,howMuch);
}






