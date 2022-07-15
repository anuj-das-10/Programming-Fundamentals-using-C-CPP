#include <stdio.h>

int GCD(int a, int b);

void main() {
    int a, b;
    printf("Enter two Positive Integers: ");
    scanf("%d %d", &a, &b);
    printf("G.C.D of %d and %d is %d.", a, b, GCD(a, b));
}

int GCD(int a, int b) {
    if (b != 0)
        return GCD(b, a % b);
    else
        return a;
}

