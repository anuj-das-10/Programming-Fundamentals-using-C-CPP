#include <stdio.h>
#include <stdlib.h>


void main() {
	char fileName[1024], input_str[1024];
    FILE *fptr;
   
	printf("Provide Path(C:\\..) or Enter File Name with Extension(if present in the same directory):  ");
	gets(fileName);
   
      if((fptr = fopen(fileName,"w")) == NULL) {
        printf("Error!");   
        exit(1);             
   	   }

   printf("Enter Strings to Write into File: ");
   gets(input_str);

   fprintf(fptr,"%s",input_str);
   fclose(fptr);
   printf("\nSuccessfully written to %s",fileName);
}
