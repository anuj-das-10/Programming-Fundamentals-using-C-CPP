#include<iostream>
using namespace std;

void displayArray(int array[], int size);
void findMinMax(int array[], int size);

int main() {
int size, temp;
	cout<< "Enter the size of array:  ";
	cin>> size;
	int array[size];
	
	cout<< "Enter "<< size <<" Elements:"<< endl;
	for(int i=0; i < size; i++) {
		cin>> array[i];	
	}
	
	cout<< "GIVEN ARRAY: ";
	displayArray(array,size);
	findMinMax(array,size);
	
	return 0;
}

void displayArray(int array[], int size) {
	for(int i=0; i<size; i++) {
		cout<< array[i]<< "  ";
	}
	cout<< endl;
}

void findMinMax(int array[], int size) {
	int min = array[0], max = array[0];
	for(int i=0; i < size; i++) {
		if(array[i] > max){
			max = array[i];
		}
		
		if(array[i] < min){
			min = array[i];
		}
	}
	cout<< "Minimum Value:  "<<min<<"\nMaximum Value:  "<<max;
}
