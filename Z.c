#include <stdio.h>

int main() {
  int row_count = 0;
  printf("Enter the number of rows(minimum: 5):\n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: Too less rows, aborting");
    return -1;
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
  }
  printf("\n");

  for (int i = 2; i < row_count; ++i) {
    for (int j = 0; j < row_count; ++j) {
      if (i == row_count - j) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
  }
}
