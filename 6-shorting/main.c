#include <stdio.h>

void main(){
  int length = 32;
  char data[length];
  printf("Input : ");
  scanf("%s", &data);

  for (int i = 0; i < length; i+=2){
    if(data[i] == 0)break;
    for (int j = 0; j < length - 1; j+=2)
    {
      if(data[j] == 0)break;
      if ((int)data[i] < (int)data[j]){
        char tmp;
        tmp = data[j];
        data[j] = data[i];
        data[i] = tmp;
      }
    }
  }
  printf("Output : %s\n",data);
}


  // for (int i = 0; i < length; i += 2){
  //   if(data[i] == 0)break;
  //   for (int j = 0; j < length - 1; j+=2){
  //     if(data[j] == 0)break;
  //     if ((int)data[i] < (int)data[j]){
  //       char tmp;
  //       tmp = data[j];
  //       data[j] = data[i];
  //       data[i] = tmp;
  //     }
  //   }
  // }




