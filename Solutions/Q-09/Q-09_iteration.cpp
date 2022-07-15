#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    cout<< "Factorial of "<< n<< " is "<< factorial(n); 
    return 0;
}

int factorial(int n) {
	int fact=1;
	
    if(n==0)
	   	return 1;
	else {
		for(int i=n; i>0; i--){
			fact *= i;
		}	
		return fact;
	}
}

