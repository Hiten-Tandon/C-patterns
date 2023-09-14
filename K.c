#include <stdio.h>

int main() {
  int row_count = 0;

  printf("Enter the number of rows(min: 5): \n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: too little row count, Aborting.");
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
    for (int j = 0; j < row_count; ++j) {
      if ((i == (row_count / 2) - j) || (i == (row_count / 2) + j)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
