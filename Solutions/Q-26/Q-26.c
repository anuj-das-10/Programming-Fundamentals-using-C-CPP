#include<stdio.h>
#include<ctype.h>

void main() {
char str[1024];
int vowels=0, semi_vowels=0, consonants=0, i;	

	printf("Enter the String:  ");
	gets(str);
	
	for(i=0; str[i] != '\0'; i++) {
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

printf("\nVowels: %d\nSemi-Vowels: %d\nConsonants: %d",vowels,semi_vowels, consonants);

}
