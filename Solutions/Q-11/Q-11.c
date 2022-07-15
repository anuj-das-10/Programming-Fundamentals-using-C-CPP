#include<stdio.h>

void main() {
  int num, i;  
	printf("Enter a Positive Integer: ");
    scanf("%d", &num);
    
    printf("Factors of %d are: ", num);
    
	for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d  ", i);
        }
    }
}

