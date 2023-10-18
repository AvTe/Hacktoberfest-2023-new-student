#include <stdio.h>

int isPrime(int n) {
  int i;
  if (n == 1) {
    return 0;
  }
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int isPrimeNum = isPrime(n);
  if (isPrimeNum == 1) {
    printf("%d is a prime number\n", n);
  } else {
    printf("%d is not a prime number\n", n);
  }
  return 0;
}
