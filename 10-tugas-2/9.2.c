#include <stdio.h>
#include <string.h>

int compareString(char wordOne[64], char wordTwo[64]){
  int compare = strcmp(wordOne, wordTwo);
  if (compare > 0) compare = 1;
  else if (compare < 0) compare = -1;
  return compare;
}

void main(){
  char wordOne[64];
  char wordTwo[64];
  char *ptr_wordOne = &wordOne;
  char *ptr_wordTwo = &wordTwo;

  printf("String 1 : ");
  scanf("%s", ptr_wordOne);
  printf("String 2 : ");
  scanf("%s", ptr_wordTwo);

  int compare = compareString(wordOne, wordTwo);

  printf("output : %d\n\n", compare);
}

