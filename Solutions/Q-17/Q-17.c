#include<stdio.h>
#include<math.h>

int sumOfCube(int num);

void main() {
	int num;
	printf("Enter a number:  ");
	scanf("%d",&num);
	
	if(num == sumOfCube(num))
		printf("It is a Armstrong Number!");
	else
		printf("It is not a Armstrong Number!");
}

int sumOfCube(int num) {
int sum=0, cubeOfdigit, digit;
    while(num!=0) {
    digit = num % 10;
    cubeOfdigit = pow(digit,3);
    sum += cubeOfdigit;
    num /= 10;
    }
return sum;
}

