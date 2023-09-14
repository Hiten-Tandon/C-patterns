#include <stdio.h>

int main() {
  int num_rows = 0;

  printf("Enter the number of rows(min 5): \n");
  scanf("%d", &num_rows);

  for (int i = 1; i < num_rows; ++i) {
    printf("*");
  }

  printf("\n");

  for (int i = 2; i < num_rows; ++i) {
    printf("*");
    for (int j = 1; j < num_rows; ++j) {
      printf(" ");
    }
    printf("*\n");
  }
  for (int i = 1; i < num_rows; ++i) {
    printf("*");
  }
  return 0;
}
