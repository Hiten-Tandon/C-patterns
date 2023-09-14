#include <stdbool.h>
#include <stdio.h>
int main() {
  int row_count = 0;

  printf("Enter the number of rows(min: 5)\n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: number of rows is less than minimum. Aborting");
    return 0;
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
    bool cond_1 =
        i == 0 || i == row_count / 2 - 1 + row_count % 2 || i == row_count - 1;
    for (int j = 1; j <= row_count; ++j) {
      bool cond_2 = j == row_count;
      if (cond_1 && !cond_2 || !cond_1 && cond_2) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }

  return 0;
}
