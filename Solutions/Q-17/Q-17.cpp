#include<iostream>
#include<math.h>
using namespace std;

int sumOfCube(int n);

int main() {
int n, sum=0;
	cout<<"Enter a number: ";
	cin>> n;
	
	if(n == sumOfCube(n))
		cout<< "It is a Armstrong Number!";
	else 
		cout<< "It is not a Armstrong Number!";
		
	return 0;
}


int sumOfCube(int n) {
int sum=0, cubeOfdigit, digit;
    while(n!=0) {
    digit = n % 10;
    cubeOfdigit = pow(digit,3);
    sum += cubeOfdigit;
    n /= 10;
    }
return sum;
}

