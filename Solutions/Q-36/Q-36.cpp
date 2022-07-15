#include<iostream>
using namespace std;

int sumOfNumbers(int x, int y) {
	return (x+y);
}
int sumOfNumbers(int x, int y, int z) {
	return (x+y+z);
}
int sumOfNumbers(int a, int b, int c, int d) {
	return (a+b+c+d);
}

int main() {
int x,y,z;
cout<< "Function sumOfNumbers() is overloaded by changing the number of parameters:\n" << endl;
x = sumOfNumbers(23,45);
cout << "23 + 45 = " << x << endl;
y = sumOfNumbers(45,78,35);
cout << "45 + 78 + 35 = " << y << endl;
z = sumOfNumbers(23,25,65,12);
cout << "23 + 25 + 65 + 12 = " << z << endl;
	
	return 0;
}
