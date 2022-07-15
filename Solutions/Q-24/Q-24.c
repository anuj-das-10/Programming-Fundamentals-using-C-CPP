#include<stdio.h>
#include<string.h>

void main() {
  char str1[1024], str2[1024];
  printf("Enter String-1:  ");
  gets(str1);
  printf("Enter String-2:  ");
  gets(str2);

 	if(strcmp(str1,str2) == 0) {
 		printf("Strings are equal!");
	 }
	 else if(strcmp(str1,str2) < 0){
	 	printf("First non-matching character in string-1 is lower (in ASCII) than that of string-2 !");
	 }
	 else {
	 	printf("First non-matching character in string-1 is greater (in ASCII) than that of string-2 !");
	 }
}
