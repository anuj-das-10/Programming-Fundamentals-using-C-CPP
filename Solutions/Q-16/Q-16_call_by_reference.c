#include<stdio.h>

void Swap(int *a, int *b);

void main() {
  int a, b;
  printf("Enter the value of a:  ");
  scanf("%d",&a);
  printf("Enter the value of b:  ");
  scanf("%d",&b);
  system("cls");

  printf("Before Swapping:  a = %d   &   b = %d",a,b);
  Swap(&a,&b);
  printf("\nAfter Swapping :  a = %d   &   b = %d",a,b);
}

void Swap(int *a, int *b) {
int temp = *a;
    *a = *b;
    *b = temp;
}
