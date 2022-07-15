#include<stdio.h>

void main(){
int rows, cols, i,j;
	printf("Enter number of Rows & Columns of Matrix:  ");
	scanf("%d %d", &rows, &cols);
	int matrix[rows][cols];

printf("\nEnter element of %d X %d Matrix: \n", rows, cols);
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++) {
			scanf("%d",&matrix[i][j]);
		}
	}
printf("\n\nGIVEN MATRIX:\n");
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++) {
			printf("%d   ",matrix[i][j]);
		}
		printf("\n");
	}
printf("\nTRANSPOSE OF A MATRIX:\n");
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++) {
			printf("%d   ",matrix[j][i]);
		}
		printf("\n");
	}
}
