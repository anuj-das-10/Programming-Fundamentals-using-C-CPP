#include <stdio.h>

int GCD(int a, int b);

void main() {
    int a, b;

    printf("Enter two Positive Integers: ");
    scanf("%d %d", &a, &b);

    printf("G.C.D of %d and %d is %d.", a, b, GCD(a,b));
}

int GCD(int a, int b) {
	int  i, gcd;
    for(i=1; i <= a && i <= b; ++i) {
        if(a%i==0 && b%i==0) 			// Checks if i is factor of both integers
        gcd = i;
    }
    return gcd;
}
