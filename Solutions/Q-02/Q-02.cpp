#include<iostream>
using namespace std;
int main() {
int num, x, sum=0, product=1;
	cout<<"Enter an Integer: ";
	cin>> num;
	
	while(num!=0) {
		x = num % 10;
		sum += x;
		product *= x;
		num /= 10;
	}
	
	cout<<"Sum of Digits: "<<sum<< endl;
	cout<<"Product of Digits: "<< product;
	return 0;
}
