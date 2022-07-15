#include<stdio.h>
void main(){
	int num, x, sum=0, product=1;
	printf("Enter an Integer: ");
	scanf("%d",&num);
	
	while(num!=0){
		x = num % 10;
		sum += x;
		product *= x;
		num /= 10;
	}
	
	printf("Sum of Digits: %d",sum);
	printf("\nProduct of Digits: %d",product);
}
