#include<stdio.h>

void main() {
	char str1[1024], str2[1024];
	int i=0, j, length=0;
	printf("Enter String-1:  ");
	gets(str1);
	printf("Enter String-2:  ");
	gets(str2);
	
	while(str1[i] != '\0') {
		length++;
		i++;
	}
	
	for (j = 0; str2[j] != '\0'; ++j, ++length) {
    str1[length] = str2[j];
  	}
	str1[length]='\0';

	printf("After Concatenation:  %s",str1);
}
