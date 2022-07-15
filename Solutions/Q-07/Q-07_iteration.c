#include<stdio.h>

void fibonacci(int n);

void main() { 
	int n; 
	printf("Enter the number of terms:  "); 
	scanf("%d",&n);
	printf("\nFIBONACCI SERIES:\n"); 
	fibonacci(n);
}
 
void fibonacci(int n) { 
	int num1=0, num2=1, num3, i;
	if(n==0 || n==1)
		printf("%d  ",num1);
	else {
		printf("%d   %d   ",num1,num2);
		for(i=2; i<n; i++){
			num3 =  num1 + num2;
			printf("%d   ",num3);
			num1 = num2;
			num2 = num3;
		}	
	}
	
} 
