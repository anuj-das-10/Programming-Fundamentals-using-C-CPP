#include<iostream>
using namespace std;

int main() {
int rows, cols;
cout<< "Enter number of Rows & Columns of Matrix:  ";
cin>> rows >> cols;
int matrix[rows][cols];

cout<< "\nEnter elements of "<< rows << " X " << cols<< " Matrix:"<< endl;
	for(int i=0; i<rows; i++) {
		for(int j=0; j<cols; j++) {
			cin>> matrix[i][j];
		}
	}
cout<< "\n\nGIVEN MATRIX:\n";
	for(int i=0; i<rows; i++) {
		for(int j=0; j<cols; j++) {
			cout<< matrix[i][j] << "   ";
		}
		cout<< endl;
	}
	
cout<< "\nTRANSPOSE OF A MATRIX:\n";
	for(int i=0; i<rows; i++) {
		for(int j=0; j<cols; j++) {
			cout<< matrix[j][i]<< "   ";
		}
		cout<< endl;
	}

	return 0;
}

