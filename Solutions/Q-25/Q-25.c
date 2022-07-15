#include<stdio.h>
#include<ctype.h>

void main() {
    char str[1024];
    int i;
    printf("Enter the String:  ");
    gets(str);
	
	for(i=0; str[i] != '\0'; i++){
		str[i] = toupper(str[i]);
	}
	
	printf("%s",str);
}
