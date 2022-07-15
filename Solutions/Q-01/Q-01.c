#include<stdio.h>
void main(){
	int num, revNum=0, remainder;
	
	printf("Enter a Number : ");
	scanf("%d",&num);
	
	while(num!=0){
		remainder = num % 10;
		revNum = revNum * 10 + remainder;
		num /= 10;
	}
	
	printf("Reversed Number: %d",revNum);
}
