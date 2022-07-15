#include <iostream>
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
    if (b != 0)
        return GCD(b, a % b);
    else
        return a;
}

