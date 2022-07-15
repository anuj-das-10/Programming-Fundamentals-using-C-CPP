#include<iostream>
using namespace std;

int GCD(int a, int b);

int main() {
    int a, b;
    cout<< "Enter two Positive Integers: ";
    cin>> a>> b;
    cout<< "G.C.D of "<< a<< " and "<< b<< " is "<< GCD(a,b);
    return 0;
}

int GCD(int a, int b) {
	int  i, gcd;
    
	for(i=1; i <= a && i <= b; ++i) {
        if(a%i==0 && b%i==0) 			// Checks if i is factor of both integers
        gcd = i;
    }
    return gcd;
}
