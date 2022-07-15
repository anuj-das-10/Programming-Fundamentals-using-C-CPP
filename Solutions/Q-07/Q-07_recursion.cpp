#include<iostream>
using namespace std;

int fibonacci(int n);

int main() { 
	int n; 
	cout<< "Enter the number of terms:  "; 
	cin>> n;
	
	cout<< "\nFIBONACCI SERIES: "<<endl;
		for(int i=0; i<n; i++) { 
			cout<< fibonacci(i)<< "   ";
		}
}
 
int fibonacci(int n) { 
	if(n==0) 
		return 0; 
	else if(n==1) 
		return 1; 
	else 
		return (fibonacci(n-1)+fibonacci(n-2));
} 
