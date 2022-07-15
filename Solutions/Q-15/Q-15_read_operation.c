#include <stdio.h>
#include <stdlib.h>

void main() {
char fileName[100],line[500];
FILE *fptr;
printf("Provide Path(C:\\..) or Enter File Name with Extension(if present in the same directory):  ");
gets(fileName);

   if((fptr = fopen(fileName,"r")) == NULL) {
       printf("Error! Opening File!");
       exit(1);
   }
	printf("\n");
	while(fgets(line, sizeof(line), fptr)) {
		printf("%s", line); 
	}
fclose(fptr);
}
