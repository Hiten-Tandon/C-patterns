#include <stdio.h>
int main() {
  int num_rows = 0;

  printf("Enter the number of rows (min: 5): \n");
  scanf("%d", &num_rows);

  if (num_rows < 5) {
    printf("Error: Number of rows is less than 5, aborting.");
    return -1;
  }

  for (int i = 0; i < num_rows; ++i) {
    for (int j = -num_rows / 2; j < num_rows + num_rows / 2; ++j) {
      if ((i == num_rows / 2 && j >= 0 && j <= num_rows - num_rows % 2) ||
          j == num_rows / 2 - i || j == num_rows / 2 + i) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
