#include  <stdio.h>

int main() {
  char num;
  printf("enter a natural number:");
  scanf("%hhd", &num);

  printf("Binary code of %d is:", num);

  for(int i = 7; i >= 0; i--) {
     printf("%d", (num >> i) & 1);
  }

  return 0;
}
