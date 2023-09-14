
#include <stdio.h>
int main() {
  int row_count = 0;
  printf("Enter the number of rows you want\n");
  scanf("%d", &row_count);

  for (int i = 0; i < row_count; ++i) {
    for (int j = i; j < row_count; ++j) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
