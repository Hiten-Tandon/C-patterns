#include <stdio.h>

int main() {
  int row_count = 0, dig = 0;

  printf("Enter the number of rows(minimum 5)\n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: Minimum number of rows is 5, aborting.");
    return -1;
  }

  printf("Enter the digit you want to print\n");
  scanf("%d", &dig);

  if (dig >= 10) {
    printf("Error: digits range from 0 to 9, aborting");
    return -2;
  }

  for (int i = 0; i < row_count; ++i) {
    for (int j = 0; j < row_count; ++j) {
      if (i == 0 || j == 0 || i == row_count - j - 1 || i == row_count - 1 ||
          j == row_count - 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("    ");

    for (int j = 0; j < row_count; ++j) {
      if (j == 0 || i == row_count / 2 ||
          i > row_count / 2 && j == row_count - 1 || i == row_count - 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("    ");
    for (int j = 3; j >= 0; --j) {
      int bit = (dig >> j) & 1;

      if (bit) {
        for (int k = 0; k < row_count; ++k) {
          if (i == 0 && k <= row_count / 2 || k == row_count / 2 ||
              i == row_count - 1) {
            printf("*");
          } else {
            printf(" ");
          }
        }
      } else {
        for (int k = 0; k < row_count; ++k) {
          if (i == 0 || k == 0 || i == row_count - k - 1 ||
              k == row_count - 1 || i == row_count - 1) {
            printf("*");
          } else {
            printf(" ");
          }
        }
      }
      printf("    ");
    }
    printf("\n");
  }

  return 0;
}
