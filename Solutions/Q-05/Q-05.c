#include<stdio.h>
#include<string.h>

int checkPalindrome(char str[]);

void main() {
	char str[1024];
	printf("Enter a string: ");
	gets(str);
	
		if(checkPalindrome(str))
			printf("It is a palindrome string!");
		else	
			printf("It is not a palindrome string!");
}

int checkPalindrome(char str[]) {
	int length, i;
	length = strlen(str);
    
    for(i=0; i<length; i++) {
        
		if(str[i] != str[length-1-i]) {
            return 0;
        }
    }
    return 1;
}
