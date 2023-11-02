#include <stdio.h>
int main()
 {   
  long long num1, num2, result;   
  printf("Enter the first number: ");
  scanf("%lld", "&num1);
  printf("Enter the second number: ");
  scanf("%lld", "&num2);
  // calculate the result
  result = num1 * num2; 
  printf("The multiplication result is: %lld\n", result);
  return 0;
  }
