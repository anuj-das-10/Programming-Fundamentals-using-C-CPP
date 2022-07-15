#include<stdio.h>

void main() {
	char str[1024];
	int i=0, length=0;
	printf("Enter the String:  ");
	gets(str);
	while(str[i] != '\0') {
		length++;
		i++;
	}
	
	printf("Length of the given string:  %d",length);
}
