#include <stdio.h>

int factorial(int n);

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n,factorial(n));
}

int factorial(int n) {
   int i, fact=1;
   
   if(n==0)
   		return 1;
   	else {
   		for(i=1; i<=n; i++){
   			fact *= i;		
		}
		return fact;
	}
}

