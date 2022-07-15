#include<stdio.h>

void main() {
	int size, element, i;
	printf("Enter the size of the Array:  ");
	scanf("%d",&size);
	int arr[size], pos[size], posIndex=0;
	printf("Enter %d Elements:  \n");
	for(i=0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	system("cls");

//	Displaying Array
	printf("Given Array:  ");
	for(i=0; i < size; i++) {
		printf("%d  ",arr[i]);
	}

	printf("\n\nEnter the element to be searched:  ");
	scanf("%d",&element);

	for(i=0; i < size; i++) {
		if(arr[i] == element) {
			pos[posIndex++] = i+1;
		}
	}
	
	
  if(posIndex != 0) {
  	printf("%d found at position:  ",element);
  	for(i=0; i<posIndex; i++) {
  		printf("%d,  ",pos[i]);
	}
	return; 
  } 
  else {
  	printf("%d not found in this Array!",element);
    return;
  }
}
