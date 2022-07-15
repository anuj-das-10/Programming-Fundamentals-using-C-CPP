#include<iostream>
#include<ctype.h>
using namespace std;

int main() {
string str;
int vowels=0, semi_vowels=0, consonants=0;	

	printf("Enter the String:  ");
	getline(cin,str);
	
	for(int i=0; str[i] != '\0'; i++) {
	if(toupper(str[i])=='A' || toupper(str[i])=='E' || toupper(str[i])=='I' || toupper(str[i])=='O' || toupper(str[i])=='U') {
	vowels++;			
	}
	else if(toupper(str[i])=='W' || toupper(str[i])=='Y') {
	semi_vowels++;
	}
	else if(str[i]==' ') {
		continue;
	}
	else {
	consonants++;
	}
	
}

cout<< "\nVowels: "<< vowels<< "\nSemi-Vowels: "<< semi_vowels<< "\nConsonants: "<< consonants;
return 0;
}
