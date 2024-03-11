#include <stdio.h>

int main() {
    char num;
    
    // Ask the user to input a natural number
    printf("Enter a natural number: ");
    scanf("%hhd", &num);
    
    // Convert the number to binary using bitwise operations
    printf("Binary code: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    
    return 0;
}

