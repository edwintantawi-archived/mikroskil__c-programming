#include <stdio.h>
#include <string.h>

void main(){
  char text[64];
  int counter[6] = {0,0,0,0,0,0};
  char vokal[10] = {'a','A', 'e','E', 'i','I', 'o','O', 'u','U'};
  char konsonan[42] = {'b','B', 'c','C', 'd','D', 'f','F', 'g','G', 'h','H', 'j','J', 'k','K', 'l','L','m','M','n','N','p','P','q','Q','r','R','s','S','t','T','v','V','w','W','x','X','y','Y','z','Z'};

  printf("input : ");
  gets(text);

  int textLength = strlen(text);
  for (int i = 0; i < textLength; i++){
    // kapital
    if ((int)text[i] >= 65 && (int)text[i] <= 90)
    {
      counter[0]++;
    }
    // non kapital
    if((int)text[i] >= 97 && (int)text[i] <= 122 ){
      counter[1]++;
    }

    // vokal
    for (int j = 0; j < 10; j++)
    {
      if((int)text[i] == (int)vokal[j]){
        counter[2]++;
        break;
      }
      
    }
    // konsonan
    for (int j = 0; j < 42; j++)
    {
      if((int)text[i] == (int)konsonan[j]){
        counter[3]++;
        break;
      }
      
    }
    
    // angka
    if((int)text[i] >= 48 && (int)text[i] <= 57 ){
      counter[4]++;
    }

    // space
    if((int)text[i] == 32){
      counter[5]++;
    }
  }

  printf("kapital\t\t: %i\n", counter[0]);
  printf("non kapital\t: %i\n", counter[1]);
  printf("vokal\t\t: %i\n", counter[2]);
  printf("konsonan\t: %i\n", counter[3]);
  printf("angka\t\t: %i\n", counter[4]);
  printf("spasi\t\t: %i\n", counter[5]);
}