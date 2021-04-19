#include <stdio.h>
#include <string.h>

void main(){
  int length = 32, nicknameLength = 0;
  char nickname[length], say[3] = "Bro";

  printf("nickname : ");
  scanf("%s", &nickname);

  for (int i = 0; i < length; i++){
    if(nickname[i] == '\0') break;
    for (int j = 0; j < length; j++){
      if(nickname[j] == '\0') break;
      if(i != j && nickname[i] == nickname[j]) nickname[i] = '0';
    }
  }

  for (int i = 0; i < length; i++){
    if(nickname[i] == '\0') break;
    if(nickname[i] == '0') continue;
    nicknameLength++;
  }

  if (nicknameLength % 2 == 0) strcpy(say, "Sis");

  printf("output: Hallo %s\n", say);
}

        // printf("nickname[%i] = %c\n",i, nickname[i]);
        // printf("nickname[%i] = %c\n", j,nickname[j]);