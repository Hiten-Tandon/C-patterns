#include <stdio.h>

int main() {
  int num_rows = 0;
  printf("Enter the number of rows(min: 5)\n");
  scanf("%d", &num_rows);

  printf(" ");
  for (int i = 2; i < num_rows; ++i) {
    printf("*");
  }

  printf("\n");

  for (int i = 2; i < num_rows; ++i) {
    printf("*");
    for (int j = 2; j < num_rows; ++j) {
      if (i >= num_rows * 3 / 4 && j == i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("*\n");
  }

  printf(" ");

  for (int i = 2; i <= num_rows; ++i) {
    printf("*");
  }

  printf("\n");
  for (int i = 0; i < num_rows / 4; ++i) {
    for (int j = 0; j < num_rows * 3 / 2; ++j) {
      if (i == j - num_rows) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }
  return 0;
}
