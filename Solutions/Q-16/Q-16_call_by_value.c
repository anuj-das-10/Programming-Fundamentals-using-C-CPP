#include<stdio.h>

void Swap(int a, int b);

void main() {
  int a, b;
  printf("Enter the value of a:  ");
  scanf("%d",&a);
  printf("Enter the value of b:  ");
  scanf("%d",&b);
  system("cls");

  printf("Before calling Swap() :  a = %d   &   b = %d",a,b);
  Swap(a,b);
  printf("\n\nBut not Swapped inside main() :  a = %d   &   b = %d",a,b);
}

void Swap(int a, int b) {
int temp = a;
       a = b;
       b = temp;
    printf("\nSwapped Inside Swap() :  a = %d   &   b = %d",a,b);
}
