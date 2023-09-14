#include <stdio.h>

int main() {
  int num_rows = 0;
  printf("Enter the number of rows (minimum 5):\n");
  scanf("%d", &num_rows);

  if (num_rows < 5) {
    printf("Error: Number of rows is less than minimum, aborting");
    return 1;
  }

  printf(" ");
  for (int i = 0; i <= num_rows; ++i) {
    printf("*");
  }
  printf("\n");

  for (int i = 2; i < num_rows; ++i) {
    printf("*\n");
  }

  printf(" ");
  for (int i = 0; i <= num_rows; ++i) {
    printf("*");
  }

  return 0;
}
