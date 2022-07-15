#include<stdio.h>
void main() {
	int n, i, j;
	printf("Enter the number of lines(rows):  ");
	scanf("%d",&n);
	
	for(i=1; i <= n*2; i+=2){
		for(j=1; j <= i; j++){
			printf("* ");
		}
	printf("\n");
	}	
}
