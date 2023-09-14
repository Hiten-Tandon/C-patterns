#include <stdio.h>
int main() {
  int row_count = 0;

  printf("Enter the number of rows, you want(minimum 5): \n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: Number of rows is less than minimum, Aborting.");
    return -1;
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
    if (i == (row_count - 1) / 2) {
      for (int j = 2; j < row_count; ++j) {
        printf("*");
      }
    } else {
      for (int j = 2; j < row_count; ++j) {
        printf(" ");
      }
    }

    printf("*\n");
  }

  return 0;
}
