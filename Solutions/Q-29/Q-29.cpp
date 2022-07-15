#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

void convertToDecimal(string binary);

int main() {
	string binary;
	cout<< "Enter binary number:  ";
	getline(cin,binary);
	
	cout<<"BINARY :  "<< binary;
	convertToDecimal(binary);
		
	return 0;
}

void convertToDecimal(string binary) {
	int eqv_decimal = 0, length = binary.length();
	reverse(binary.begin(), binary.end());
	
	for(int i=0; i<length; i++) {	
		if(binary[i]=='1') {
			eqv_decimal += pow(2,i);	
		}	
	}
	cout<< "\nDECIMAL:  "<< eqv_decimal;
}
