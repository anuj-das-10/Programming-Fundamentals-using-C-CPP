#include<stdio.h>

void displayArray(int array[], int size);
void findMinMax(int array[], int size);

void main() {
	int size, temp, i;
	printf("Enter the size of array:  ");
	scanf("%d", &size);
	int array[size];
	
	printf("Enter %d Elements:\n", size);
	for(i=0; i < size; i++) {
		scanf("%d", &array[i]);
	}
	
	printf("GIVEN ARRAY: ");
	displayArray(array,size);
	findMinMax(array,size);
}


void displayArray(int array[], int size) {
	int i;
	for(i=0; i<size; i++) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

void findMinMax(int array[], int size) {
	int i, min = array[0], max = array[0];
	for(i=0; i < size; i++) {
		if(array[i] > max) {
			max = array[i];
		}
		
		if(array[i] < min) {
			min = array[i];
		}
	}
	printf("Minimum Value:  %d\nMaximum Value:  %d", min, max);
}
