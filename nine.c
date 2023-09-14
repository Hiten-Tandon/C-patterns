
#include <stdio.h>

int main() {
  int row_count = 0;
  printf("Enter the number of rows(min 5)\n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: number of rows less than 5. Aborting");
    return -1;
  }

  for (int i = 0; i < row_count; ++i) {
    for (int j = row_count * 3 / 4 - 1; j >= 0; --j) {
      if ((((i == 0) || (i == row_count / 2) || (i == row_count - 1)) &&
           j != row_count * 3 / 4 - 1) ||
          (i != 0 && i < row_count / 2 && j == row_count * 3 / 4 - 1) ||
          (i != row_count - 1 && j == row_count * 3 / 4 - 1 &&
           i > row_count * 3 / 4)) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    if (i != 0 && i != row_count - 1) {
      printf("*");
    } else {
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
