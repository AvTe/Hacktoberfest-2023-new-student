#include <stdio.h>

int main() {
  int n, i, a = 0, b = 1, c;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci series: ");
  for (i = 0; i < n; i++) {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
  return 0;
}
