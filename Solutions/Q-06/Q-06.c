#include<stdio.h>

int checkPrime(int x);
void printPrime(int range_start, int range_end);

void main(){
	int n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(checkPrime(n))
		printf("%d is a prime number!\n",n);
	else
		printf("%d is not a prime number!\n",n);
	
	printf("\nPrinting all Prime Numbers upto 100: \n");
	printPrime(1,100);	

}


int checkPrime(int x) {
	int i;
		if(x==1 || x==0)			// So that Program won't crash
			return 0;
		else {
			for(i=2; i <= x/2; i++) {
				if(x%i==0) {
				return 0;
				}
			}
		}
	return 1;	
}

void printPrime(int range_start, int range_end) {
	int i;
	for(i=range_start; i <= range_end; i++) {
		if(checkPrime(i)==1){
			printf("%d   ",i);
		}
	}
}












