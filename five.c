#include <stdio.h>

int main() {
  int row_count = 0;

  printf("Enter the number of rows(minimum: 5)\n");
  scanf("%d", &row_count);

  for (int i = 0; i < row_count; ++i) {
    for (int j = 0; j < row_count; ++j) {
      if (i == 0 || i == row_count / 2 || i == row_count - 1 ||
          i < row_count / 2 && j == 0 ||
          i > row_count / 2 && j == row_count - 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
