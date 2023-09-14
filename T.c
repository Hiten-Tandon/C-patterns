#include <stdio.h>

int main() {
  int num_rows = 0;
  printf("Enter the number of rows(minimum 5): \n");
  scanf("%d", &num_rows);

  for (int i = 0; i < num_rows; ++i) {
    for (int j = 0; j < num_rows - 1 + num_rows % 2; ++j) {
      if (i == 0 || j == (num_rows - 1) / 2) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
