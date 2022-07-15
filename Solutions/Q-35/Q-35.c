#include<stdio.h>

void main() {
char ch;
int num1, num2;
input: 
printf("Enter Expression:  ");
scanf("%d %c %d", &num1, &ch, &num2);

switch(ch)
{
	case '+': printf("%d + %d = %d",num1, num2, (num1 + num2));
			  break;
	case '-': printf("%d - %d = %d",num1, num2, (num1 - num2));
			  break;
	case '*': printf("%d X %d = %d",num1, num2, (num1 * num2));
			  break;
	case '/': printf("%d / %d = %.2f",num1, num2, (num1 / (float)num2));
			  break;
	default:  system("cls");
			  printf("Enter a valid expression! \n\n");
			  goto input;
}

}
