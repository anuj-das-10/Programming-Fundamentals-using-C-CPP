#include<iostream>
using namespace std;

void displayArray(int array[], int size) {
	for(int i=0; i<size; i++) {
		cout<< array[i]<< "  ";
	}
	cout<< endl;
}

int main() {
int size, temp, i;
	cout<< "Enter the size of array:  ";
	cin>> size;
	int array[size];
	
	cout<< "Enter "<< size <<" Elements:"<< endl;
	for(i=0; i < size; i++) {
		cin>> array[i];	
	}
	
	cout<< "ORIGINAL ARRAY: ";
	displayArray(array,size);
	
	for(i=0; i < size/2; i++) {
		temp = array[i];
		array[i] = array[size-1-i];
		array[size-1-i] = temp;
	}
	cout<< "REVERSED ARRAY: ";
	displayArray(array,size);
		
	return 0;
}
