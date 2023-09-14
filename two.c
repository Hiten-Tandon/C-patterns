#include <math.h>
#include <stdio.h>

int main() {
  int num_rows = 0;
  printf("Enter the number of rows(minimum: 5)\n");
  scanf("%d", &num_rows);

  for (int i = 0; i < num_rows; ++i) {
    for (int j = 0; j < num_rows; ++j) {
      if (i == 0 && j != num_rows - 1 && j != 0 || i == num_rows - 1 ||
          i != 0 && i < num_rows / 2 &&
              (j == num_rows - 1 || i < 3 && j == 0) ||
          i >= num_rows / 2 && j == 2 * (num_rows - i - 1)) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
