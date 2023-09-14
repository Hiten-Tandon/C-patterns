#include <stdio.h>

int main() {
  int num_rows = 0;
  printf("Enter the number of rows(minimum: 5)\n");
  scanf("%d", &num_rows);

  if (num_rows < 5) {
    printf("Error: Number of rows is less than minimum");
    return -1;
  }

  for (int i = 0; i < num_rows; ++i) {
    if (i == 0 || i == num_rows / 2 - 1 + num_rows % 2 || i == num_rows - 1) {
      for (int j = 0; j < num_rows; ++j) {
        printf("*");
      }
      printf("\n");
    } else {
      printf("*\n");
    }
  }

  return 0;
}
