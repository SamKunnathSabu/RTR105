#include <stdio.h>
int main()
 {   
  long long num1, num2, product;
   
  printf("Enter the first number: ");
  scanf("%lld", &num1);
  printf("Enter the second number: ");
  scanf("%lld", &num2);
  // calculate the product
  product = num1 * num2; 
  printf("Multiplication product: %lld\n", product);
  return 0;
  }
