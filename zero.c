#include <stdio.h>

int main() {
  int row_count = 0;
  printf("Enter the number of rows(min: 5): \n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: Number of rows is less than 5. Aborting");
    return -1;
  }

  printf(" ");
  for (int i = 0; i < row_count; ++i) {
    printf("*");
  }
  printf("\n");

  for (int i = 0; i < row_count; ++i) {
    printf("*");
    for (int j = 0; j < row_count; ++j) {
      if (j == row_count - i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("*\n");
  }

  printf(" ");
  for (int i = 0; i < row_count; ++i) {
    printf("*");
  }
  printf("\n");

  return 0;
}
