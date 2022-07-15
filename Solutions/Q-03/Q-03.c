#include<stdio.h>
void main(){
	int n, i;
	float sum=0;
		printf("Enter the number of terms:  ");
		scanf("%d",&n);
		
		for(i=1; i<=n; i++){
			sum += (float)1/i;
		}
	printf("Sum of the Series:  %.2f",sum);	
}
