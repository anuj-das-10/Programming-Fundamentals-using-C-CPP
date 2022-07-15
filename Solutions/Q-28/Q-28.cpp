#include<iostream>
using namespace std;

void convertToBinary(int num);

int main() {
   int num;
   cout<< "Enter a number:  ";
   cin>> num;
   cout<< "DECIMAL:  "<< num;
   convertToBinary(num);
		
	return 0;
}

void convertToBinary(int num) {
	int binaryArray[1024], remainder, i=0;
	
	while(num != 0) {
		remainder = num % 2;
		binaryArray[i++] = remainder;
		num /= 2;
	}
	cout<< "\nBINARY :  ";
	for(int j=i-1; j >= 0; j--) {
		cout<< binaryArray[j];
	}
}
