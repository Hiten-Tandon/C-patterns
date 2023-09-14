#include <stdio.h>

int main() {
  int row_count = 0;
  printf("Enter the number of rows(minimum 5): \n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: minimum row count is 5, aborting.");
    return -1;
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
    for (int j = 2; j < row_count + 1 - row_count % 2; ++j) {
      if ((i <= row_count / 2) &&
          (j == i + 1 || j == (row_count - i + 1 - row_count % 2))) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("*\n");
  }

  return 0;
}
