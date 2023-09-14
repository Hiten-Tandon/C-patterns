#include <stdio.h>

int main() {
  int row_count = 0;
  printf("Enter the number of rows(minimum: 5): \n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: Row count less than minimum Abrting\n");
    return -1;
  }

  for (int i = 1; i < row_count; ++i) {
    printf("*\n");
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
  }

  return 0;
}
