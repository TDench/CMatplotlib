#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argvs[]) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int size = 7;

  FILE* fPtr;
  FILE* fPtrParament;

  fPtr = fopen("arrValue.txt", "w");
  fPtrParament = fopen("paramenters.txt", "w");

  for (int i = 0; i < size; i++) {
    fprintf(fPtr, "%d ", arr[i]);
  }

  fclose(fPtr);
  //   for (int i = 0; i < 10; i++) {
  //     printf("%d, ", i);
  //   }
  system("python test/hello.py");

  return 0;
}
