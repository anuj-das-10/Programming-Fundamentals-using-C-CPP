// Developed by Anuj Das

#include<stdio.h>
#include<stdlib.h>

void main() {
    int a[10][10], b[10][10], c[10][10];
    int rows_m1,cols_m1, rows_m2, cols_m2, i,j,k;
    printf("Enter number of Rows & Columns of 1st Matrix:  ");
	scanf("%d %d",&rows_m1,&cols_m1);
	printf("Enter number of Rows & Columns of 2nd Matrix:  ");
	scanf("%d %d",&rows_m2,&cols_m2);
	
	
	if(cols_m1 != rows_m2) {
		printf("\nNumber of Columns of the 1st Matrix must be equal to the number of Rows of the 2nd Matrix!!");
		exit(1);
	}
    
   
    printf("Enter Elements of 1st Matrix: \n");
    for(i=0; i < rows_m1; i++) {
        for(j=0; j < cols_m1; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter Elements of 2nd Matrix: \n");
    for(i=0; i < rows_m2; i++) {
        for(j=0; j < cols_m2; j++) {
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0; i < rows_m1; i++) {
        for(j=0; j < cols_m2; j++) {
            c[i][j]=0;
            for(k=0; k <  rows_m2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("\n\nPRODUCT OF TWO MATRICES:\n");
    for(i=0; i < rows_m1; i++) {
        for(j=0; j < cols_m2; j++) {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

