#include <stdio.h>

int main() {
  int row_count = 0;
  printf("Enter the number of rows(minimum: 5): \n");
  scanf("%d", &row_count);

  if (row_count < 5) {
    printf("Error: Row count less than minimum Abrting\n");
    return -1;
  }

  for (int i = 0; i < row_count; ++i) {
    printf("*");
  }

  printf("\n");

  for (int i = row_count - 1; i > 0; --i) {
    for (int j = 0; j < i; ++j) {
      printf(" ");
    }
    printf("*\n");
  }

  return 0;
}
