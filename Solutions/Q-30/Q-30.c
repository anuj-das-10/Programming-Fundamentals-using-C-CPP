#include<stdio.h>

void displayArray(int array[], int size) {
	int i;
	for(i=0; i<size; i++) {
		printf("%d  ",array[i]);
	}
	printf("\n");
}

void main() {
	int size, temp, i;
	printf("Enter the size of array:  ");
	scanf("%d", &size);
	int array[size];
	
	printf("Enter %d Elements:\n");
	for(i=0; i < size; i++) {
		scanf("%d", &array[i]);	
	}
	
	printf("ORIGINAL ARRAY: ");
	displayArray(array,size);
	
	for(i=0; i < size/2; i++) {
		temp = array[i];
		array[i] = array[size-1-i];
		array[size-1-i] = temp;
	}
	printf("REVERSED ARRAY: ");
	displayArray(array,size);
}
