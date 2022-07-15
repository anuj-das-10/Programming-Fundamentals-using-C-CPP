// Developed by Anuj Das

#include<iostream>
using namespace std;

int main() {
   int a[10][10], b[10][10], c[10][10];
    int rows_m1,cols_m1, rows_m2, cols_m2, i, j, k;
    cout<< "Enter number of Rows & Columns of 1st Matrix:  ";
	cin>> rows_m1>> cols_m1;
	cout<< "Enter number of Rows & Columns of 2nd Matrix:  ";
	cin>> rows_m2>> cols_m2;
	
	
	if(cols_m1 != rows_m2) {
		cout<< "\nNumber of Columns of the 1st Matrix must be equal to the number of Rows of the 2nd Matrix!!";
		exit(1);
	}
	
	
	
    cout<< "Enter Elements of 1st Matrix: \n";
    for(i=0; i < rows_m1; i++) {
        for(j=0; j < cols_m1; j++) {
            cin>> a[i][j];
        }
    }
    
    cout<< "Enter Elements of 2nd Matrix: \n";
    for(i=0; i < rows_m2; i++) {
        for(j=0; j < cols_m2; j++) {
            cin>> b[i][j];
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
    
    cout<< "\n\nPRODUCT OF TWO MATRICES:\n";
    for(i=0; i < rows_m1; i++) {
        for(j=0; j < cols_m2; j++) {
            cout<< c[i][j]<< "\t";
        }
        cout<< endl;
    }
	
    return 0;
}
