#include <stdio.h>
int main() {
  int row_count = 0;
  printf("Enter the number of rows(minimum 5)\n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: number of rows is less than 5, Aborting");
    return -1;
  }

  for (int i = 1; i < row_count; ++i) {
    printf("*");
    for (int j = 2; j < row_count; ++j) {
      printf(" ");
    }
    printf("*\n");
  }

  printf(" ");
  for (int i = 2; i < row_count; ++i) {
    printf("*");
  }

  return 0;
}
