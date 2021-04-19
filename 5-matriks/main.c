#include <stdio.h>

void createMatrix(int xAxis, int yAxis){
  int MATRIX[yAxis][xAxis];
  int isIdentity = 0;
  int matrixLength = yAxis * xAxis;

  for (int y = 0; y < yAxis; y++){
    for (int x = 0; x < xAxis; x++){
      printf("Insert value to [%i][%i] : ", y, x);
      scanf("%i", &MATRIX[y][x]);
    }
  }
  printf("\n========== Matrix ===========\n");
  for (int y = 0; y < yAxis; y++){
    printf("| ");
    for (int x = 0; x < xAxis; x++){
      if(yAxis == xAxis){
        if(y == x && MATRIX[y][x] == 1 || y != x && MATRIX[y][x] == 0){
          isIdentity += 1;
        } else{
          isIdentity = 0;
        }
      } else {
        isIdentity = 0;
      }
      printf("%i | ", MATRIX[y][x]);
    }
    printf("\n");

  }
  printf("\n====== Type of Matrix ======\n");
  if(isIdentity == matrixLength){
    printf("Matrix Identity\n");
    return;
  }
  printf("Not Matrix Identity\n");
}

void main(){
  int xAxis, yAxis;

  printf("======= Create Matrix =======\n");
  printf("Insert X-Axis Matrix : ");
  scanf("%i", &xAxis);
  printf("Insert Y-Axis Matrix : ");
  scanf("%i", &yAxis);
  printf("\n==== Insert Matrix Value ====\n");

  createMatrix(xAxis, yAxis);
}














