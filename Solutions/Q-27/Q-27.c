#include<stdio.h>
#include<string.h>

void main() {
	char str[1024];
	int length, i, temp;
	printf("Enter a string: ");
	gets(str);
	
	length = strlen(str);
	
	for(i=0; i < length/2; i++) {
    	temp = str[i];
		str[i] = str[length-1-i]; 
    	str[length-1-i] = temp;       
    }
    
printf("Reversed:  %s",str);
}

