#include<stdio.h>

void convertToBinary(int num);

void main() {
	int num;
	printf("Enter a number:  ");
	scanf("%d",&num);
	printf("DECIMAL:  %d",num);
	convertToBinary(num);
}

void convertToBinary(int num) {
	int binaryArray[1024], remainder, i=0, j;
	
	while(num != 0) {
		remainder = num % 2;
		binaryArray[i++] = remainder;
		num /= 2;
	}
	printf("\nBINARY :  ");
	for(j=i-1; j >= 0; j--) {
		printf("%d",binaryArray[j]);
	}
}
