#include <stdio.h>

int main() {
  int row_count = 0;

  printf("Enter the number of rows\n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: Too little rows, aborting.");
    return -1;
  }

  for (int i = 0; i < row_count; ++i) {
    for (int j = 0; j < row_count; ++j) {
      if (i == 0 && j > row_count / 2 ||
          i == row_count - 1 && j >= row_count / 2 ||
          i == row_count / 2 && j >= row_count / 2 ||
          i > 0 && i < row_count / 2 && j == row_count / 2 ||
          i > row_count / 2 && i - row_count / 2 == j ||
          i > row_count / 2 && j == row_count - 1 || i == row_count - j - 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
