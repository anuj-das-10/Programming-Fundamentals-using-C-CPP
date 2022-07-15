#include<stdio.h>

void main(){
	int rows, cols, i,j;
	printf("Enter number of rows:  ");
	scanf("%d",&rows);
	printf("Enter number of columns:  ");
	scanf("%d",&cols);
	int a[rows][cols], b[rows][cols], c[rows][cols];
	
	printf("Enter Elements of 1st Matrix: \n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements of 2nd Matrix: \n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\n\nSUM OF TWO MATRICES:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
