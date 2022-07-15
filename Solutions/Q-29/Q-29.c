#include<stdio.h>
#include<math.h>
#include<string.h>

void convertToDecimal(char binary[]);

void main() {
	int i;
	char binary[1024];
	printf("Enter binary number:  ");
	gets(binary);
	printf("BINARY :  %s",binary);
	convertToDecimal(binary);
}

void convertToDecimal(char binary[]) {
	int i, eqv_decimal = 0, length = strlen(binary);
	strrev(binary);
	
	for(i=0; i<length; i++) {	
		if(binary[i]=='1') {
		eqv_decimal += pow(2,i);	
		}	
	}
	printf("\nDECIMAL:  %d",eqv_decimal);
}
