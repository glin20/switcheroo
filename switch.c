#include <stdio.h>
#include <time.h>
int main(){
  int array[10];
  array[0] = 0;
  srand(time(NULL));
  int i;
  for (i = 1; i < 10; i++){
    array[i] = rand();
  }
  for (i = 0; i < 10; i++){
    printf("%d\t", array[i]);
  }
  printf("\n");
  int array2[10];
  int *arrayp = array;
  int *array2p = array2;
  for (i = 9; i >= 0; i--){
    *(array2p + i) = *(arrayp + 10 - i - 1);
  }
  for (i = 0; i < 10; i++){
    printf("%d\t", array2[i]);
  }
  printf("\n");
  for (i = 9; i >= 0; i--){
    array2[i] = array2[10 - i - 1];
  }
  for (i = 0; i < 10; i++){
    printf("%d\t", array2[i]);
  }
  return 0;
}
