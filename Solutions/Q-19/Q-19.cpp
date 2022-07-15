#include<iostream>
using namespace std;

int main() {
	int rows, cols, i,j;
	cout<< "Enter number of rows:  ";
	cin>> rows;
	cout<< "Enter number of columns:  ";
	cin>> cols;
	int a[rows][cols], b[rows][cols], c[rows][cols];

	cout<< "Enter Elements of 1st Matrix: \n";
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++) {
			cin>> a[i][j];
		}
	}
	cout<< "Enter Elements of 2nd Matrix: \n";
	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++) {
			cin>> b[i][j];
		}
	}

	for(i=0; i < rows; i++) {
		for(j=0; j < cols; j++) {
			c[i][j] = a[i][j] - b[i][j];
		}
	}

	cout<< "\n\nDIFFERENCE OF TWO MATRICES:\n";
	for(i=0; i < rows; i++){
		for(j=0; j < cols; j++){
			cout<< c[i][j]<< "  ";
		}
		cout<< "\n";
	}
}
